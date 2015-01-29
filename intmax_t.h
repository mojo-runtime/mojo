#ifndef _c__intmax_t_h
#define _c__intmax_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INTMAX_TYPE__
__INTMAX_TYPE__
#else
#  error
#endif
intmax_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
