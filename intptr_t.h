#ifndef c_intptr_t_h_
#define c_intptr_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __INTPTR_TYPE__
__INTPTR_TYPE__
#else
#  error
#endif
intptr_t;

_c_namespace_end

#endif
