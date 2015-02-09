#ifndef c_ptrdiff_t_h_
#define c_ptrdiff_t_h_

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
