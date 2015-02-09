#ifndef c_uint_fast32_t_h_
#define c_uint_fast32_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_FAST32_TYPE__
__UINT_FAST32_TYPE__
#else
#  error
#endif
uint_fast32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
