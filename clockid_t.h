#ifndef _c__clockid_t_h
#define _c__clockid_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
int // int32_t
#  else
#    error
#  endif
#else
#  error
#endif
clockid_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
