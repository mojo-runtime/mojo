#ifndef c_int32_t_h_
#define c_int32_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT32_TYPE__
__INT32_TYPE__
#else
#  error
#endif
int32_t;

_c_namespace_end

#endif
