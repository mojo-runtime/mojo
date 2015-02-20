#ifndef c_ESRCH_h_
#define c_ESRCH_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(SRCH, 3);
#else
#  error
#endif

#endif
