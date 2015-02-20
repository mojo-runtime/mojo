#ifndef c_EMLINK_h_
#define c_EMLINK_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(MLINK, 31);
#else
#  error
#endif

#endif
