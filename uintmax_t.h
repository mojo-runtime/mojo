#ifndef c_uintmax_t_h_
#define c_uintmax_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINTMAX_TYPE__
__UINTMAX_TYPE__
#else
#  error
#endif
uintmax_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
