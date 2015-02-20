#ifndef c_ENOTTY_h_
#define c_ENOTTY_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NOTTY, 25);
#else
#  error
#endif

#endif
