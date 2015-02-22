#ifndef c_uintptr_t_h_
#define c_uintptr_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __UINTPTR_TYPE__
__UINTPTR_TYPE__
#else
#  error
#endif
uintptr_t;

_c_namespace_end

#endif
