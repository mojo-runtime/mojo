#ifndef c_mode_t_h_
#define c_mode_t_h_

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned int // uint32_t
#  else
#    error
#  endif
#else
#  error
#endif
mode_t;

#endif
