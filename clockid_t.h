#ifndef c_clockid_t_h_
#define c_clockid_t_h_

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
clockid_t;

_c_namespace_end

#endif
