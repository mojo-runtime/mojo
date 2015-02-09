#ifndef c_int64_t_h_
#define c_int64_t_h_

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
