#ifndef c_int_fast32_t_h_
#define c_int_fast32_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT_FAST32_TYPE__
__INT_FAST32_TYPE__
#else
#  error
#endif
int_fast32_t;

_c_namespace_end

#endif
