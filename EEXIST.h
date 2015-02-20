#ifndef c_EEXIST_h_
#define c_EEXIST_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(EXIST, 17);
#else
#  error
#endif

#endif
