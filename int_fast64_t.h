#ifndef c_int_fast64_t_h_
#define c_int_fast64_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT_FAST64_TYPE__
__INT_FAST64_TYPE__
#else
#  error
#endif
int_fast64_t;

_c_namespace_end

#endif
