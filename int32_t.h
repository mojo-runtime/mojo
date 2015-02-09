#ifndef c_int32_t_h_
#define c_int32_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT32_TYPE__
__INT32_TYPE__
#else
#  error
#endif
int32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
