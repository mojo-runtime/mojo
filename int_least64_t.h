#ifndef _c__int_least64_t_h
#define _c__int_least64_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_LEAST64_TYPE__
__INT_LEAST64_TYPE__
#else
#  error
#endif
int_least64_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
