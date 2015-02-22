#ifndef c_wint_t_h_
#define c_wint_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __WINT_TYPE__
__WINT_TYPE__
#else
#  error
#endif
wint_t;

_c_namespace_end

#endif
