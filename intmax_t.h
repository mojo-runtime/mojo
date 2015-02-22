#ifndef c_intmax_t_h_
#define c_intmax_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INTMAX_TYPE__
__INTMAX_TYPE__
#else
#  error
#endif
intmax_t;

_c_namespace_end

#endif
