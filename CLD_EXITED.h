#ifndef c_CLD_EXITED_h_
#define c_CLD_EXITED_h_

#include "_c_CLD_.h"

#if defined(__linux__)
_c_CLD_(EXITED, 1);
#else
#  error
#endif

#endif
