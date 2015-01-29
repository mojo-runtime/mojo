#ifndef _c__uintmax_t_h
#define _c__uintmax_t_h

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
