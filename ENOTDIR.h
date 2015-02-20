#ifndef c_ENOTDIR_h_
#define c_ENOTDIR_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NOTDIR, 20);
#else
#  error
#endif

#endif
