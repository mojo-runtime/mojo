#ifndef _c__int64_t_h
#define _c__int64_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __INT64_TYPE__
__INT64_TYPE__
#else
#  error
#endif
int64_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
