#ifndef c_pid_t_h_
#define c_pid_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

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

_c_namespace_end

#endif
