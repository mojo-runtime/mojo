#ifndef c_SIGTRAP_h_
#define c_SIGTRAP_h_

#include "_internal/_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(TRAP, 5);
#else
#  error
#endif

#endif
