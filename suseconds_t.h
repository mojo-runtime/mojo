#ifndef _c__suseconds_t_h
#define _c__suseconds_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int64_t
#  else
#    error
#  endif
#else
#  error
#endif
suseconds_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
