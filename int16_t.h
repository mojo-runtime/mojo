#ifndef c_int16_t_h_
#define c_int16_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
int16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
