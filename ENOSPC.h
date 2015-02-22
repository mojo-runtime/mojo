#ifndef c_ENOSPC_h_
#define c_ENOSPC_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(NOSPC, 28);
#else
#  error
#endif

#endif
