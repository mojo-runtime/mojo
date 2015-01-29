#ifndef _c__uint32_t_h
#define _c__uint32_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT32_TYPE__
__UINT32_TYPE__
#else
#  error
#endif
uint32_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
