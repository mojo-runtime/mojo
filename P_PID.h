#ifndef c_P_PID_h_
#define c_P_PID_h_

#include "_c_define_P_.h"

#ifdef __linux__
_c_define_P_(PID, 1);
#else
#  error
#endif

#endif
