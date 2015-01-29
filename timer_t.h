#ifndef _c__timer_t_h
#define _c__timer_t_h

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
void*
#  else
#    error
#  endif
#else
#  error
#endif
timer_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
