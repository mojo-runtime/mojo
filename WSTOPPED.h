#ifndef c_WSTOPPED_h_
#define c_WSTOPPED_h_

#include "_internal/_c_define_W.h"

#ifdef __linux__
_c_define_W(STOPPED, 2);
#else
#  error
#endif

#endif
