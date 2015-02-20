#ifndef c_ENOTBLK_h_
#define c_ENOTBLK_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NOTBLK, 15);
#else
#  error
#endif

#endif
