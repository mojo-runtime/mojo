#ifndef c_EBUSY_h_
#define c_EBUSY_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(BUSY, 16);
#else
#  error
#endif

#endif
