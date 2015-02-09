#ifndef c_intptr_t_h_
#define c_intptr_t_h_

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
