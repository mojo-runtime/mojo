#ifndef c_mode_t_h_
#define c_mode_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

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

_c_namespace_end

#endif
