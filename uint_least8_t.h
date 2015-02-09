#ifndef c_uint_least8_t_h_
#define c_uint_least8_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_LEAST8_TYPE__
__UINT_LEAST8_TYPE__
#else
#  error
#endif
uint_least8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
