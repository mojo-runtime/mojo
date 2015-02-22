#ifndef c_int16_t_h_
#define c_int16_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT16_TYPE__
__INT16_TYPE__
#else
#  error
#endif
int16_t;

_c_namespace_end

#endif
