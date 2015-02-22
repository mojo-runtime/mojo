#ifndef c_ENOTEMPTY_h_
#define c_ENOTEMPTY_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(NOTEMPTY, 39);
#else
#  error
#endif

#endif
