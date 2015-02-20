#ifndef c_CLD_TRAPPED_h_
#define c_CLD_TRAPPED_h_

#include "_c_CLD_.h"

#if defined(__linux__)
_c_CLD_(TRAPPED, 4);
#else
#  error
#endif

#endif
