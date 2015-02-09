#ifndef _c__tcflag_t_h
#define _c__tcflag_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  if !(defined(__sparc__) && defined(__arch64__))
unsigned long
#  else
unsigned int
#  endif
#else
#  error
#endif
tcflag_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
