#ifndef c_CLD_KILLED_h_
#define c_CLD_KILLED_h_

#include "_define/CLD_.h"

#if defined(__linux__)
_c_define_CLD_(KILLED, 2);
#else
#  error
#endif

#endif
