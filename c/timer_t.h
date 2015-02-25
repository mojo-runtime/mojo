#ifndef c_timer_t_h_
#define c_timer_t_h_

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

#endif
