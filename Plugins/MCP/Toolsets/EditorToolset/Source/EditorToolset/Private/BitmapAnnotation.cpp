// Copyright Epic Games, Inc. All Rights Reserved.

#include "BitmapAnnotation.h"

#include "Math/UnrealMathUtility.h"
#include "Math/Vector4.h"

namespace UE::ToolsetRegistry::BitmapAnnotation
{
	namespace
	{
		/**
		 * Tiny 5x7 bitmap font.
		 *
		 * Each glyph is 7 rows of 5-bit bitmasks (MSB = leftmost pixel). ASCII 32 (' ')
		 * through 95 ('_') map to indices 0..63. Lowercase a..z folds to uppercase at
		 * lookup time; everything else renders as a space. This keeps the table small
		 * while still covering all characters used by label generation.
		 */
		const uint8 GlyphData[][7] = {
			{0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ' '
			{0x04,0x04,0x04,0x04,0x04,0x00,0x04}, // '!'
			{0x0A,0x0A,0x0A,0x00,0x00,0x00,0x00}, // '"'
			{0x0A,0x0A,0x1F,0x0A,0x1F,0x0A,0x00}, // '#'
			{0x04,0x0F,0x14,0x0E,0x05,0x1E,0x04}, // '$'
			{0x19,0x19,0x02,0x04,0x08,0x13,0x13}, // '%'
			{0x08,0x14,0x14,0x08,0x15,0x12,0x0D}, // '&'
			{0x04,0x04,0x00,0x00,0x00,0x00,0x00}, // '\''
			{0x02,0x04,0x08,0x08,0x08,0x04,0x02}, // '('
			{0x08,0x04,0x02,0x02,0x02,0x04,0x08}, // ')'
			{0x04,0x15,0x0E,0x1F,0x0E,0x15,0x04}, // '*'
			{0x00,0x04,0x04,0x1F,0x04,0x04,0x00}, // '+'
			{0x00,0x00,0x00,0x00,0x00,0x04,0x08}, // ','
			{0x00,0x00,0x00,0x1F,0x00,0x00,0x00}, // '-'
			{0x00,0x00,0x00,0x00,0x00,0x00,0x04}, // '.'
			{0x01,0x01,0x02,0x04,0x08,0x10,0x10}, // '/'
			{0x0E,0x11,0x13,0x15,0x19,0x11,0x0E}, // '0'
			{0x04,0x0C,0x04,0x04,0x04,0x04,0x0E}, // '1'
			{0x0E,0x11,0x01,0x06,0x08,0x10,0x1F}, // '2'
			{0x0E,0x11,0x01,0x06,0x01,0x11,0x0E}, // '3'
			{0x02,0x06,0x0A,0x12,0x1F,0x02,0x02}, // '4'
			{0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E}, // '5'
			{0x06,0x08,0x10,0x1E,0x11,0x11,0x0E}, // '6'
			{0x1F,0x01,0x02,0x04,0x08,0x08,0x08}, // '7'
			{0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E}, // '8'
			{0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C}, // '9'
			{0x00,0x00,0x04,0x00,0x04,0x00,0x00}, // ':'
			{0x00,0x00,0x04,0x00,0x04,0x04,0x08}, // ';'
			{0x02,0x04,0x08,0x10,0x08,0x04,0x02}, // '<'
			{0x00,0x00,0x1F,0x00,0x1F,0x00,0x00}, // '='
			{0x08,0x04,0x02,0x01,0x02,0x04,0x08}, // '>'
			{0x0E,0x11,0x01,0x02,0x04,0x00,0x04}, // '?'
			{0x0E,0x11,0x17,0x15,0x17,0x10,0x0E}, // '@'
			{0x0E,0x11,0x11,0x1F,0x11,0x11,0x11}, // 'A'
			{0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E}, // 'B'
			{0x0E,0x11,0x10,0x10,0x10,0x11,0x0E}, // 'C'
			{0x1C,0x12,0x11,0x11,0x11,0x12,0x1C}, // 'D'
			{0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F}, // 'E'
			{0x1F,0x10,0x10,0x1E,0x10,0x10,0x10}, // 'F'
			{0x0E,0x11,0x10,0x17,0x11,0x11,0x0F}, // 'G'
			{0x11,0x11,0x11,0x1F,0x11,0x11,0x11}, // 'H'
			{0x0E,0x04,0x04,0x04,0x04,0x04,0x0E}, // 'I'
			{0x07,0x02,0x02,0x02,0x02,0x12,0x0C}, // 'J'
			{0x11,0x12,0x14,0x18,0x14,0x12,0x11}, // 'K'
			{0x10,0x10,0x10,0x10,0x10,0x10,0x1F}, // 'L'
			{0x11,0x1B,0x15,0x15,0x11,0x11,0x11}, // 'M'
			{0x11,0x19,0x15,0x13,0x11,0x11,0x11}, // 'N'
			{0x0E,0x11,0x11,0x11,0x11,0x11,0x0E}, // 'O'
			{0x1E,0x11,0x11,0x1E,0x10,0x10,0x10}, // 'P'
			{0x0E,0x11,0x11,0x11,0x15,0x12,0x0D}, // 'Q'
			{0x1E,0x11,0x11,0x1E,0x14,0x12,0x11}, // 'R'
			{0x0E,0x11,0x10,0x0E,0x01,0x11,0x0E}, // 'S'
			{0x1F,0x04,0x04,0x04,0x04,0x04,0x04}, // 'T'
			{0x11,0x11,0x11,0x11,0x11,0x11,0x0E}, // 'U'
			{0x11,0x11,0x11,0x11,0x11,0x0A,0x04}, // 'V'
			{0x11,0x11,0x11,0x15,0x15,0x15,0x0A}, // 'W'
			{0x11,0x11,0x0A,0x04,0x0A,0x11,0x11}, // 'X'
			{0x11,0x11,0x0A,0x04,0x04,0x04,0x04}, // 'Y'
			{0x1F,0x01,0x02,0x04,0x08,0x10,0x1F}, // 'Z'
			{0x0E,0x08,0x08,0x08,0x08,0x08,0x0E}, // '['
			{0x10,0x10,0x08,0x04,0x02,0x01,0x01}, // '\\'
			{0x0E,0x02,0x02,0x02,0x02,0x02,0x0E}, // ']'
			{0x04,0x0A,0x11,0x00,0x00,0x00,0x00}, // '^'
			{0x00,0x00,0x00,0x00,0x00,0x00,0x1F}, // '_'
		};

		constexpr int32 GLYPH_WIDTH = 5;
		constexpr int32 GLYPH_HEIGHT = 7;

		int32 GetGlyphIndex(TCHAR Ch)
		{
			if (Ch >= TEXT(' ') && Ch <= TEXT('_'))
			{
				return Ch - TEXT(' ');
			}
			if (Ch >= TEXT('a') && Ch <= TEXT('z'))
			{
				return Ch - TEXT('a') + (TEXT('A') - TEXT(' '));
			}
			return 0;
		}
	}

	// Pixel primitives -------------------------------------------------------

	void FBitmapCanvas::SetPixel(int32 X, int32 Y, const FColor& Color)
	{
		if (X >= 0 && X < Size.X && Y >= 0 && Y < Size.Y)
		{
			Pixels[Y * Size.X + X] = Color;
		}
	}

	void FBitmapCanvas::BlendPixel(int32 X, int32 Y, const FColor& Color, float Alpha)
	{
		if (X < 0 || X >= Size.X || Y < 0 || Y >= Size.Y)
		{
			return;
		}
		FColor& Dst = Pixels[Y * Size.X + X];
		const uint8 A = static_cast<uint8>(FMath::Clamp(Alpha, 0.f, 1.f) * 255.f);
		Dst.R = static_cast<uint8>((Color.R * A + Dst.R * (255 - A)) / 255);
		Dst.G = static_cast<uint8>((Color.G * A + Dst.G * (255 - A)) / 255);
		Dst.B = static_cast<uint8>((Color.B * A + Dst.B * (255 - A)) / 255);
		Dst.A = 255;
	}

	// Line / dot primitives --------------------------------------------------

	void FBitmapCanvas::DrawLine(int32 X0, int32 Y0, int32 X1, int32 Y1, const FColor& Color, float Alpha)
	{
		const int32 DX = FMath::Abs(X1 - X0);
		const int32 DY = FMath::Abs(Y1 - Y0);
		const int32 SX = X0 < X1 ? 1 : -1;
		const int32 SY = Y0 < Y1 ? 1 : -1;
		int32 Err = DX - DY;

		// Bresenham's natural maximum iteration count: every step advances X, Y, or both,
		// and the loop hits its natural exit when (X0,Y0) reaches (X1,Y1). MaxIter is a
		// belt-and-suspenders safeguard against caller error (passing wildly unclamped
		// coordinates) — it must be at least DX+DY+1 so legitimate long diagonals don't
		// get truncated mid-draw. ProjectLineClipped clamps inputs upstream.
		const int32 MaxIter = DX + DY + 1;

		for (int32 i = 0; i < MaxIter; ++i)
		{
			BlendPixel(X0, Y0, Color, Alpha);
			if (X0 == X1 && Y0 == Y1)
			{
				break;
			}
			const int32 E2 = 2 * Err;
			if (E2 > -DY) { Err -= DY; X0 += SX; }
			if (E2 <  DX) { Err += DX; Y0 += SY; }
		}
	}

	void FBitmapCanvas::DrawLineThick(int32 X0, int32 Y0, int32 X1, int32 Y1, const FColor& Color, int32 Thickness, float Alpha)
	{
		const int32 Half = Thickness / 2;
		for (int32 DX = -Half; DX <= Half; ++DX)
		{
			for (int32 DY = -Half; DY <= Half; ++DY)
			{
				DrawLine(X0 + DX, Y0 + DY, X1 + DX, Y1 + DY, Color, Alpha);
			}
		}
	}

	void FBitmapCanvas::DrawDot(int32 CX, int32 CY, int32 Radius, const FColor& Color)
	{
		const int32 R2 = Radius * Radius;
		for (int32 DY = -Radius; DY <= Radius; ++DY)
		{
			for (int32 DX = -Radius; DX <= Radius; ++DX)
			{
				if (DX * DX + DY * DY <= R2)
				{
					SetPixel(CX + DX, CY + DY, Color);
				}
			}
		}
	}

	// Font -------------------------------------------------------------------

	int32 GetGlyphWidth()
	{
		return GLYPH_WIDTH;
	}

	int32 GetGlyphHeight()
	{
		return GLYPH_HEIGHT;
	}

	int32 GetGlyphAdvance(int32 Scale)
	{
		// One extra pixel per character column provides inter-character spacing.
		return GLYPH_WIDTH * Scale + Scale;
	}

	int32 MeasureString(const FString& Text, int32 Scale)
	{
		return Text.Len() * GetGlyphAdvance(Scale);
	}

	void FBitmapCanvas::DrawChar(int32 X, int32 Y, TCHAR Ch, const FColor& Color, int32 Scale)
	{
		const int32 Idx = GetGlyphIndex(Ch);
		if (Idx < 0 || Idx >= static_cast<int32>(UE_ARRAY_COUNT(GlyphData)))
		{
			return;
		}

		for (int32 Row = 0; Row < GLYPH_HEIGHT; ++Row)
		{
			const uint8 Bits = GlyphData[Idx][Row];
			for (int32 Col = 0; Col < GLYPH_WIDTH; ++Col)
			{
				if (Bits & (1 << (GLYPH_WIDTH - 1 - Col)))
				{
					for (int32 SY = 0; SY < Scale; ++SY)
					{
						for (int32 SX = 0; SX < Scale; ++SX)
						{
							SetPixel(X + Col * Scale + SX, Y + Row * Scale + SY, Color);
						}
					}
				}
			}
		}
	}

	void FBitmapCanvas::DrawString(int32 X, int32 Y, const FString& Text, const FColor& Color, int32 Scale, bool bDrawBackground)
	{
		const int32 CharW = GetGlyphAdvance(Scale);
		const int32 CharH = GLYPH_HEIGHT * Scale;
		const int32 TextW = Text.Len() * CharW;
		const int32 Padding = Scale;

		if (bDrawBackground)
		{
			const FColor BgColor(0, 0, 0, 200);
			for (int32 BY = Y - Padding; BY < Y + CharH + Padding; ++BY)
			{
				for (int32 BX = X - Padding; BX < X + TextW + Padding; ++BX)
				{
					BlendPixel(BX, BY, BgColor, 0.7f);
				}
			}
		}

		for (int32 i = 0; i < Text.Len(); ++i)
		{
			DrawChar(X + i * CharW, Y, Text[i], Color, Scale);
		}
	}

	// Projection helpers -----------------------------------------------------

	bool ProjectWorldToScreen(const FVector& WorldPos, const FMatrix& ViewProjectionMatrix, FIntPoint Size, int32& OutX, int32& OutY)
	{
		const FVector4 Projected = ViewProjectionMatrix.TransformFVector4(FVector4(WorldPos, 1.0));
		if (Projected.W <= 0.0)
		{
			return false;
		}

		const double InvW = 1.0 / Projected.W;
		const double NdcX = Projected.X * InvW;
		const double NdcY = Projected.Y * InvW;

		OutX = FMath::RoundToInt((NdcX * 0.5 + 0.5) * Size.X);
		OutY = FMath::RoundToInt((1.0 - (NdcY * 0.5 + 0.5)) * Size.Y);
		return true;
	}

	bool ProjectLineClipped(const FVector& A, const FVector& B,
							const FMatrix& ViewProjectionMatrix, FIntPoint Size,
							int32& OutX0, int32& OutY0, int32& OutX1, int32& OutY1,
							const FVector& CamPos, const FVector& CamFwd)
	{
		// Clip against a plane 10cm in front of the camera in world space. World-space
		// clipping (vs. clip-space W clipping) preserves line straightness after projection.
		constexpr double NearOffset = 10.0;
		const FVector PlanePoint = CamPos + CamFwd * NearOffset;

		const double DistA = FVector::DotProduct(A - PlanePoint, CamFwd);
		const double DistB = FVector::DotProduct(B - PlanePoint, CamFwd);

		if (DistA <= 0.0 && DistB <= 0.0)
		{
			return false;
		}

		FVector ClipA = A;
		FVector ClipB = B;

		if (DistA <= 0.0)
		{
			const double T = DistA / (DistA - DistB);
			ClipA = A + (B - A) * T;
		}
		else if (DistB <= 0.0)
		{
			const double T = DistB / (DistB - DistA);
			ClipB = B + (A - B) * T;
		}

		if (!ProjectWorldToScreen(ClipA, ViewProjectionMatrix, Size, OutX0, OutY0) ||
			!ProjectWorldToScreen(ClipB, ViewProjectionMatrix, Size, OutX1, OutY1))
		{
			return false;
		}

		// Clamp projected pixel coordinates to a sane range so Bresenham's DX+DY iteration
		// counter can't overflow when a line endpoint lands far off-screen.
		constexpr int32 Limit = 10000;
		OutX0 = FMath::Clamp(OutX0, -Limit, Limit);
		OutY0 = FMath::Clamp(OutY0, -Limit, Limit);
		OutX1 = FMath::Clamp(OutX1, -Limit, Limit);
		OutY1 = FMath::Clamp(OutY1, -Limit, Limit);

		return true;
	}

	// High-level overlays ----------------------------------------------------

	void DrawWorldGrid(
		FBitmapCanvas& Canvas,
		const FMatrix& ViewProjectionMatrix,
		const FVector& CamLoc,
		const FVector& CamFwd,
		double GridSpacing,
		double GridExtent,
		double GridHeight,
		double MaxLabelDistance)
	{
		const FIntPoint Size = Canvas.Size;

		const FColor AxisXColor(255, 80, 80, 255);    // Red — X axis
		const FColor AxisYColor(80, 255, 80, 255);    // Green — Y axis
		const FColor GridLabelColor(200, 230, 255, 255);
		const FColor LabelDotColor(100, 200, 255, 255);

		const double MinCoord = -GridExtent;
		const double MaxCoord =  GridExtent;

		// Multi-LOD grid: finer spacing close to camera, coarser far away. Each LOD draws
		// its lines as per-cell segments so world-space near-plane clipping produces
		// straight post-projection edges even when lines cross behind the camera.
		struct FGridLOD
		{
			double Spacing;
			double MaxDrawDist;
			FColor Color;
			float Alpha;
			int32 Thickness;
		};

		// Relative to the caller's grid_spacing:
		//   LOD 0: 1/5 spacing — very near only
		//   LOD 1: spacing     — near/mid
		//   LOD 2: 2x spacing  — mid/far
		//   LOD 3: 4x spacing  — far
		const FColor GridColorFine   (0,  60, 120, 255);
		const FColor GridColorMid    (0,  80, 160, 255);
		const FColor GridColorBright (0, 100, 200, 255);
		const FColor GridColorCoarse (20, 120, 220, 255);

		const TArray<FGridLOD> GridLODs = {
			{ GridSpacing / 5.0,        1500.0,               GridColorFine,   0.50f, 1 },
			{ GridSpacing,              5000.0,               GridColorMid,    0.65f, 1 },
			{ GridSpacing * 2.0,        10000.0,              GridColorBright, 0.75f, 1 },
			{ GridSpacing * 4.0,        GridExtent * 2.0,     GridColorCoarse, 0.85f, 1 },
		};

		for (int32 LODIdx = GridLODs.Num() - 1; LODIdx >= 0; --LODIdx)
		{
			const FGridLOD& LOD = GridLODs[LODIdx];

			double LODMinX = FMath::Max(MinCoord, CamLoc.X - LOD.MaxDrawDist);
			double LODMaxX = FMath::Min(MaxCoord, CamLoc.X + LOD.MaxDrawDist);
			double LODMinY = FMath::Max(MinCoord, CamLoc.Y - LOD.MaxDrawDist);
			double LODMaxY = FMath::Min(MaxCoord, CamLoc.Y + LOD.MaxDrawDist);
			LODMinX = FMath::FloorToDouble(LODMinX / LOD.Spacing) * LOD.Spacing;
			LODMaxX = FMath::CeilToDouble (LODMaxX / LOD.Spacing) * LOD.Spacing;
			LODMinY = FMath::FloorToDouble(LODMinY / LOD.Spacing) * LOD.Spacing;
			LODMaxY = FMath::CeilToDouble (LODMaxY / LOD.Spacing) * LOD.Spacing;

			// Skip coordinates already drawn by a coarser LOD, so we don't overdraw the
			// same world line with multiple thicknesses/alphas (finer LOD wouldn't look fine).
			auto IsDrawnByCoarser = [&](int64 Units) -> bool
			{
				for (int32 C = LODIdx + 1; C < GridLODs.Num(); ++C)
				{
					const int64 CS = FMath::RoundToInt64(GridLODs[C].Spacing);
					if (CS > 0 && (Units % CS) == 0)
					{
						return true;
					}
				}
				return false;
			};

			// Lines of constant Y (running in X).
			for (double Y = LODMinY; Y <= LODMaxY; Y += LOD.Spacing)
			{
				// The axes are drawn separately below with fine segments.
				if (FMath::IsNearlyZero(Y)) continue;
				if (LODIdx < GridLODs.Num() - 1 && IsDrawnByCoarser(FMath::RoundToInt64(Y))) continue;

				for (double X = LODMinX; X < LODMaxX; X += LOD.Spacing)
				{
					const FVector A(X, Y, GridHeight);
					const FVector B(X + LOD.Spacing, Y, GridHeight);
					int32 SX0, SY0, SX1, SY1;
					if (ProjectLineClipped(A, B, ViewProjectionMatrix, Size, SX0, SY0, SX1, SY1, CamLoc, CamFwd))
					{
						Canvas.DrawLineThick(SX0, SY0, SX1, SY1, LOD.Color, LOD.Thickness, LOD.Alpha);
					}
				}
			}

			// Lines of constant X (running in Y).
			for (double X = LODMinX; X <= LODMaxX; X += LOD.Spacing)
			{
				if (FMath::IsNearlyZero(X)) continue;
				if (LODIdx < GridLODs.Num() - 1 && IsDrawnByCoarser(FMath::RoundToInt64(X))) continue;

				for (double Y = LODMinY; Y < LODMaxY; Y += LOD.Spacing)
				{
					const FVector A(X, Y, GridHeight);
					const FVector B(X, Y + LOD.Spacing, GridHeight);
					int32 SX0, SY0, SX1, SY1;
					if (ProjectLineClipped(A, B, ViewProjectionMatrix, Size, SX0, SY0, SX1, SY1, CamLoc, CamFwd))
					{
						Canvas.DrawLineThick(SX0, SY0, SX1, SY1, LOD.Color, LOD.Thickness, LOD.Alpha);
					}
				}
			}
		}

		// Axes: drawn as short segments so they stay straight when close to the camera.
		{
			double AxisSegLen = GridSpacing / 5.0;
			if (AxisSegLen < 10.0) AxisSegLen = 100.0;

			for (double X = MinCoord; X < MaxCoord; X += AxisSegLen)
			{
				const FVector A(X, 0.0, GridHeight);
				const FVector B(X + AxisSegLen, 0.0, GridHeight);
				int32 SX0, SY0, SX1, SY1;
				if (ProjectLineClipped(A, B, ViewProjectionMatrix, Size, SX0, SY0, SX1, SY1, CamLoc, CamFwd))
				{
					Canvas.DrawLineThick(SX0, SY0, SX1, SY1, AxisXColor, 2, 0.95f);
				}
			}
			for (double Y = MinCoord; Y < MaxCoord; Y += AxisSegLen)
			{
				const FVector A(0.0, Y, GridHeight);
				const FVector B(0.0, Y + AxisSegLen, GridHeight);
				int32 SX0, SY0, SX1, SY1;
				if (ProjectLineClipped(A, B, ViewProjectionMatrix, Size, SX0, SY0, SX1, SY1, CamLoc, CamFwd))
				{
					Canvas.DrawLineThick(SX0, SY0, SX1, SY1, AxisYColor, 2, 0.95f);
				}
			}
		}

		// Coordinate labels: distance-adaptive density so we don't pile up thousands of dots.
		int32 TotalLabelsDrawn = 0;
		constexpr int32 MaxTotalLabels = 400;
		const double LabelSpacing = GridSpacing;
		const double LabelRange   = FMath::Min<double>(GridExtent, MaxLabelDistance);
		const double LabelMinX = FMath::FloorToDouble((CamLoc.X - LabelRange) / LabelSpacing) * LabelSpacing;
		const double LabelMaxX = FMath::CeilToDouble ((CamLoc.X + LabelRange) / LabelSpacing) * LabelSpacing;
		const double LabelMinY = FMath::FloorToDouble((CamLoc.Y - LabelRange) / LabelSpacing) * LabelSpacing;
		const double LabelMaxY = FMath::CeilToDouble ((CamLoc.Y + LabelRange) / LabelSpacing) * LabelSpacing;

		for (double X = LabelMinX; X <= LabelMaxX && TotalLabelsDrawn < MaxTotalLabels; X += LabelSpacing)
		{
			for (double Y = LabelMinY; Y <= LabelMaxY && TotalLabelsDrawn < MaxTotalLabels; Y += LabelSpacing)
			{
				const FVector WorldPos(X, Y, GridHeight);
				const float Dist = FVector::Dist(CamLoc, WorldPos);
				const int32 XIdx = FMath::RoundToInt(X / LabelSpacing);
				const int32 YIdx = FMath::RoundToInt(Y / LabelSpacing);

				// < 15m every intersection, < 40m every 2nd, otherwise every 4th.
				if (Dist >= 4000.f)
				{
					if ((XIdx % 4) != 0 || (YIdx % 4) != 0) continue;
				}
				else if (Dist >= 1500.f)
				{
					if ((XIdx % 2) != 0 || (YIdx % 2) != 0) continue;
				}

				if (Dist > MaxLabelDistance) continue;

				int32 ScreenX, ScreenY;
				if (!ProjectWorldToScreen(WorldPos, ViewProjectionMatrix, Size, ScreenX, ScreenY)) continue;
				if (ScreenX < 0 || ScreenX >= Size.X || ScreenY < 0 || ScreenY >= Size.Y) continue;

				const FString Label = FString::Printf(TEXT("(%d,%d)"),
					FMath::RoundToInt32(X / 100.0),
					FMath::RoundToInt32(Y / 100.0));

				Canvas.DrawDot(ScreenX, ScreenY, 3, LabelDotColor);
				Canvas.DrawString(ScreenX + 5, ScreenY - 4, Label, GridLabelColor, 2, /*bDrawBackground=*/true);
				++TotalLabelsDrawn;
			}
		}

		// Origin marker + axis legend.
		{
			int32 OX, OY;
			if (ProjectWorldToScreen(FVector(0.0, 0.0, GridHeight), ViewProjectionMatrix, Size, OX, OY)
				&& OX >= 0 && OX < Size.X && OY >= 0 && OY < Size.Y)
			{
				Canvas.DrawDot(OX, OY, 5, FColor(255, 255, 0, 255));
				Canvas.DrawString(OX + 8, OY - 8, TEXT("ORIGIN(0,0)"), FColor(255, 255, 0, 255), 2, true);
			}

			const int32 LegendX = Size.X - 120;
			const int32 LegendY = Size.Y - 50;
			Canvas.DrawString(LegendX,       LegendY, TEXT("X->"), AxisXColor, 2, true);
			Canvas.DrawString(LegendX + 55,  LegendY, TEXT("Y->"), AxisYColor, 2, true);
		}
	}

	void DrawActorLabels(FBitmapCanvas& Canvas, TArrayView<const FActorLabelCandidate> Candidates)
	{
		const FIntPoint Size = Canvas.Size;

		const FColor LabelColor(255, 255, 255, 255);
		const FColor BoxColor  (255, 200,  50, 255);
		const FColor LeaderColor(255, 200, 50, 180);

		// Already-placed label rects so subsequent labels can step around them.
		struct FRect
		{
			int32 X = 0, Y = 0, W = 0, H = 0;
			bool Overlaps(int32 OX, int32 OY, int32 OW, int32 OH) const
			{
				return !(OX + OW < X || OX > X + W || OY + OH < Y || OY > Y + H);
			}
		};
		TArray<FRect> OccupiedRects;
		OccupiedRects.Reserve(Candidates.Num());

		for (const FActorLabelCandidate& Cand : Candidates)
		{
			// Crosshair at the actor origin, drawn regardless of label placement.
			Canvas.DrawLine(Cand.ScreenX - 6, Cand.ScreenY, Cand.ScreenX + 6, Cand.ScreenY, BoxColor, 0.9f);
			Canvas.DrawLine(Cand.ScreenX, Cand.ScreenY - 6, Cand.ScreenX, Cand.ScreenY + 6, BoxColor, 0.9f);

			const int32 LabelW  = MeasureString(Cand.DisplayLabel, Cand.TextScale);
			const int32 CharH   = GetGlyphHeight() * Cand.TextScale;
			const int32 Padding = Cand.TextScale;
			const int32 RectH   = CharH + Padding * 2;
			const int32 RectW   = LabelW + Padding * 2;

			// Start above the crosshair; if the slot is occupied, step up/down in units
			// of one label height until we find a free slot or exhaust our attempts.
			const int32 BaseX = Cand.ScreenX - LabelW / 2;
			const int32 BaseY = Cand.ScreenY - RectH - 8;
			int32 FinalX = BaseX;
			int32 FinalY = BaseY;

			const int32 OffsetStep = RectH + 4;
			const int32 Offsets[] = { 0, OffsetStep, -OffsetStep, OffsetStep * 2, -OffsetStep * 2 };
			bool bPlaced = false;
			for (int32 Off : Offsets)
			{
				const int32 TestY = BaseY + Off;
				bool bOverlap = false;
				for (const FRect& Rect : OccupiedRects)
				{
					if (Rect.Overlaps(BaseX - Padding, TestY - Padding, RectW, RectH))
					{
						bOverlap = true;
						break;
					}
				}
				if (!bOverlap)
				{
					FinalY = TestY;
					bPlaced = true;
					break;
				}
			}
			if (!bPlaced)
			{
				FinalY = BaseY;
			}

			// Keep label rect fully on-screen.
			FinalX = FMath::Clamp(FinalX, 0, FMath::Max(0, Size.X - RectW));
			FinalY = FMath::Clamp(FinalY, 0, FMath::Max(0, Size.Y - RectH));

			// Leader line from label edge to crosshair when the label sits anywhere other
			// than its default slot directly above the crosshair. Both overlap-avoidance
			// (the bump loop above) and on-screen clamping count as displacement here —
			// either way the label is visually disconnected from its actor and a leader
			// helps the viewer associate them. Comparing against BaseX/BaseY captures both.
			const bool bLabelWasMoved = (FinalX != BaseX) || (FinalY != BaseY);
			if (bLabelWasMoved)
			{
				const int32 LabelCenterX = FinalX + LabelW / 2;
				const int32 LabelBottomY = FinalY + CharH + Padding;
				const int32 LabelTopY    = FinalY - Padding;
				const int32 LineEndY     = (Cand.ScreenY > LabelBottomY) ? LabelBottomY : LabelTopY;
				Canvas.DrawLine(LabelCenterX, LineEndY, Cand.ScreenX, Cand.ScreenY, LeaderColor, 0.5f);
			}

			Canvas.DrawString(FinalX, FinalY, Cand.DisplayLabel, LabelColor, Cand.TextScale, /*bDrawBackground=*/true);

			OccupiedRects.Add({ FinalX - Padding, FinalY - Padding, RectW, RectH });
		}
	}
}
