#ifndef _c__uint64_t_h
#define _c__uint64_t_h

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
