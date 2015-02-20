#ifndef c_ECHILD_h_
#define c_ECHILD_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(CHILD, 10);
#else
#  error
#endif

#endif
