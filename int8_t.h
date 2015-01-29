#ifndef _c__int8_t_h
#define _c__int8_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT8_TYPE__
__INT8_TYPE__
#else
#  error
#endif
int8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
