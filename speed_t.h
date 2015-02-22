#ifndef c_speed_t_h_
#define c_speed_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
unsigned int
#else
#  error
#endif
speed_t;

_c_namespace_end

#endif
