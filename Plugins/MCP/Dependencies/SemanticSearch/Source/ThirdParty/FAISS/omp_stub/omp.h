/*
 * Stub omp.h for building FAISS without OpenMP.
 *
 * Provides single-threaded no-op implementations of the OpenMP runtime
 * functions that FAISS uses. All parallelism is managed by UE's task system
 * instead, avoiding extra thread pools in the editor.
 */

#ifndef OMP_STUB_H
#define OMP_STUB_H

#ifdef __cplusplus
extern "C" {
#endif

typedef int omp_lock_t;

static inline int  omp_get_max_threads(void)              { return 1; }
static inline int  omp_get_num_threads(void)              { return 1; }
static inline int  omp_get_thread_num(void)               { return 0; }
static inline int  omp_in_parallel(void)                  { return 0; }
static inline int  omp_get_nested(void)                   { return 0; }
static inline void omp_set_nested(int val)                { (void)val; }
static inline void omp_set_num_threads(int num)           { (void)num; }
static inline void omp_init_lock(omp_lock_t* lock)        { (void)lock; }
static inline void omp_destroy_lock(omp_lock_t* lock)     { (void)lock; }
static inline void omp_set_lock(omp_lock_t* lock)         { (void)lock; }
static inline void omp_unset_lock(omp_lock_t* lock)       { (void)lock; }

#ifdef __cplusplus
}
#endif

#endif /* OMP_STUB_H */
