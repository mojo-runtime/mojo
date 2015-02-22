#ifndef c_ptrdiff_t_h_
#define c_ptrdiff_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __PTRDIFF_TYPE__
__PTRDIFF_TYPE__
#else
#  error
#endif
ptrdiff_t;

_c_namespace_end

#endif
