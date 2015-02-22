#ifndef c_uid_t_h_
#define c_uid_t_h_

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
uid_t;

#endif
