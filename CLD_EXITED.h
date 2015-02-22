#ifndef c_CLD_EXITED_h_
#define c_CLD_EXITED_h_

#include "_internal/_c_define_CLD_.h"

#if defined(__linux__)
_c_define_CLD_(EXITED, 1);
#else
#  error
#endif

#endif
