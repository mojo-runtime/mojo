#ifndef _c__int_fast32_t_h
#define _c__int_fast32_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_FAST32_TYPE__
__INT_FAST32_TYPE__
#else
#  error
#endif
int_fast32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
