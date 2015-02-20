#ifndef c_EPERM_h_
#define c_EPERM_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(PERM, 1);
#else
#  error
#endif

#endif
