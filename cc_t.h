#ifndef c_cc_t_h_
#define c_cc_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
unsigned char
#else
#  error
#endif
cc_t;

_c_namespace_end

#endif
