#ifndef _c__size_t_h
#define _c__size_t_h

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
