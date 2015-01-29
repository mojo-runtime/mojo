#ifndef _c__uint8_t_h
#define _c__uint8_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT8_TYPE__
__UINT8_TYPE__
#else
#  error
#endif
uint8_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
