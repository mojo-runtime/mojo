#ifndef c_uint64_t_h_
#define c_uint64_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT64_TYPE__
__UINT64_TYPE__
#else
#  error
#endif
uint64_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
