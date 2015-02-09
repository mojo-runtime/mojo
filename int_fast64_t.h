#ifndef c_int_fast64_t_h_
#define c_int_fast64_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_FAST64_TYPE__
__INT_FAST64_TYPE__
#else
#  error
#endif
int_fast64_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
