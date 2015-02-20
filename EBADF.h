#ifndef c_EBADF_h_
#define c_EBADF_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(BADF, 9);
#else
#  error
#endif

#endif
