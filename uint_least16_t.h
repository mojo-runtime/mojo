#ifndef c_uint_least16_t_h_
#define c_uint_least16_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_LEAST16_TYPE__
__UINT_LEAST16_TYPE__
#else
#  error
#endif
uint_least16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
