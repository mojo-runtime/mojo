#ifndef c_EINTR_h_
#define c_EINTR_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(INTR, 4);
#else
#  error
#endif

#endif
