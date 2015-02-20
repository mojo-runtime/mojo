#ifndef c_EFAULT_h_
#define c_EFAULT_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(FAULT, 14);
#else
#  error
#endif

#endif
