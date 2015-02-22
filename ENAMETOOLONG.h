#ifndef c_ENAMETOOLONG_h_
#define c_ENAMETOOLONG_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(NAMETOOLONG, 36); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
