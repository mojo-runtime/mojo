#ifndef c_EINTR_h_
#define c_EINTR_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(INTR, 4);
#else
#  error
#endif

#endif
