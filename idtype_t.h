#ifndef c_idtype_t_h_
#define c_idtype_t_h_

#include "c/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
int
#else
#  error
#endif
idtype_t;

_c_namespace_end

#endif
