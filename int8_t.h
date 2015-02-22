#ifndef c_int8_t_h_
#define c_int8_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT8_TYPE__
__INT8_TYPE__
#else
#  error
#endif
int8_t;

_c_namespace_end

#endif
