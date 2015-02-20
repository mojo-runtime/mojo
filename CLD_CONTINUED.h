#ifndef c_CLD_CONTINUED_h_
#define c_CLD_CONTINUED_h_

#include "_define/CLD_.h"

#if defined(__linux__)
_c_define_CLD_(CONTINUED, 6);
#else
#  error
#endif

#endif
