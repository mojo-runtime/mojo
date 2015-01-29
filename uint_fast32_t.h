#ifndef _c__uint_fast32_t_h
#define _c__uint_fast32_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_FAST32_TYPE__
__UINT_FAST32_TYPE__
#else
#  error
#endif
uint_fast32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
