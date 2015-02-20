#ifndef c_ENOENT_h_
#define c_ENOENT_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NOENT, 2);
#else
#  error
#endif

#endif
