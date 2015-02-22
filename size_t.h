#ifndef c_size_t_h_
#define c_size_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __SIZE_TYPE__
__SIZE_TYPE__
#else
#  error
#endif
size_t;

_c_namespace_end

#endif
