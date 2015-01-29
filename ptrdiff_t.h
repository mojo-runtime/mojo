#ifndef _c__ptrdiff_t_h
#define _c__ptrdiff_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __PTRDIFF_TYPE__
__PTRDIFF_TYPE__
#else
#  error
#endif
ptrdiff_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
