#ifndef c_timer_t_h_
#define c_timer_t_h_

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
