#ifndef c_CLD_DUMPED_h_
#define c_CLD_DUMPED_h_

#include "_internal/_c_define_CLD_.h"

#if defined(__linux__)
_c_define_CLD_(DUMPED, 3);
#else
#  error
#endif

#endif
