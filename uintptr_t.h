#ifndef c_uintptr_t_h_
#define c_uintptr_t_h_

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
