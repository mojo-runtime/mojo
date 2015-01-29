#ifndef _c__int16_t_h
#define _c__int16_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
int16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
