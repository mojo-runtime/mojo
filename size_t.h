#ifndef c_size_t_h_
#define c_size_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __SIZE_TYPE__
__SIZE_TYPE__
#else
#  error
#endif
size_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
