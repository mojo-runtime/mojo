#ifndef _c__intptr_t_h
#define _c__intptr_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INTPTR_TYPE__
__INTPTR_TYPE__
#else
#  error
#endif
intptr_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
