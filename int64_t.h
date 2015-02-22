#ifndef c_int64_t_h_
#define c_int64_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INT64_TYPE__
__INT64_TYPE__
#else
#  error
#endif
int64_t;

_c_namespace_end

#endif
