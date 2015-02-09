#ifndef c_uint16_t_h_
#define c_uint16_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT16_TYPE__
__UINT16_TYPE__
#else
#  error
#endif
uint16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
