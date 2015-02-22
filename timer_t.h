#ifndef c_timer_t_h_
#define c_timer_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

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

_c_namespace_end

#endif
