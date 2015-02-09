#ifndef c_int_fast8_t_h_
#define c_int_fast8_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_FAST8_TYPE__
__INT_FAST8_TYPE__
#else
#  error
#endif
int_fast8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
