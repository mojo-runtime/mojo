#ifndef c_EFBIG_h_
#define c_EFBIG_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(FBIG, 27);
#else
#  error
#endif

#endif
