#ifndef c_EDOM_h_
#define c_EDOM_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(DOM, 33);
#else
#  error
#endif

#endif
