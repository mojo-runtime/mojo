#ifndef _c__uint_fast64_t_h
#define _c__uint_fast64_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_FAST64_TYPE__
__UINT_FAST64_TYPE__
#else
#  error
#endif
uint_fast64_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
