#ifndef _c__uintptr_t_h
#define _c__uintptr_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINTPTR_TYPE__
__UINTPTR_TYPE__
#else
#  error
#endif
uintptr_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
