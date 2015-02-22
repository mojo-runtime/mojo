#ifndef c_uint32_t_h_
#define c_uint32_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
#  error
#endif

_c_namespace_end

#endif
