#ifndef c_uint8_t_h_
#define c_uint8_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT8_TYPE__
__UINT8_TYPE__
#else
#  error
#endif
uint8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
