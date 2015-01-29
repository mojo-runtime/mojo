#ifndef _c__off_t_h
#define _c__off_t_h

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
off_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
