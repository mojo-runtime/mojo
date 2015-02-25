#ifndef c_pid_t_h_
#define c_pid_t_h_

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
pid_t;

#endif
