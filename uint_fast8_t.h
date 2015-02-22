#ifndef c_uint_fast8_t_h_
#define c_uint_fast8_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __UINT_FAST8_TYPE__
__UINT_FAST8_TYPE__
#else
#  error
#endif
uint_fast8_t;

_c_namespace_end

#endif
