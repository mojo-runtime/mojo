#ifndef c_uintmax_t_h_
#define c_uintmax_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __UINTMAX_TYPE__
__UINTMAX_TYPE__
#else
#  error
#endif
uintmax_t;

_c_namespace_end

#endif
