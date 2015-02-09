#ifndef c_uint_fast8_t_h_
#define c_uint_fast8_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_FAST8_TYPE__
__UINT_FAST8_TYPE__
#else
#  error
#endif
uint_fast8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
