#ifndef c_wint_t_h_
#define c_wint_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __WINT_TYPE__
__WINT_TYPE__
#else
#  error
#endif
wint_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
