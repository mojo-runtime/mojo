#ifndef _c__int_least16_t_h
#define _c__int_least16_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT_LEAST16_TYPE__
__INT_LEAST16_TYPE__
#else
#  error
#endif
int_least16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
