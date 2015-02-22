#ifndef c_uint8_t_h_
#define c_uint8_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#else
#  error
#endif

_c_namespace_end

#endif
