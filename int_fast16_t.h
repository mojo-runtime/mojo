#ifndef c_int_fast16_t_h_
#define c_int_fast16_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_FAST16_TYPE__
__INT_FAST16_TYPE__
#else
#  error
#endif
int_fast16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
