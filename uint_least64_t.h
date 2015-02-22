#ifndef c_uint_least64_t_h_
#define c_uint_least64_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __UINT_LEAST64_TYPE__
__UINT_LEAST64_TYPE__
#else
#  error
#endif
uint_least64_t;

_c_namespace_end

#endif
