#ifndef _c__wint_t_h
#define _c__wint_t_h

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
