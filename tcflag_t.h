#ifndef c_tcflag_t_h_
#define c_tcflag_t_h_

#include "c/_c_namespace.h"

_c_namespace

typedef
#ifdef __linux__
#  if !(defined(__sparc__) && defined(__arch64__))
unsigned long
#  else
unsigned int
#  endif
#else
#  error
#endif
tcflag_t;

_c_namespace_end

#endif
