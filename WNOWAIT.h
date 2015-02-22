#ifndef c_WNOWAIT_h_
#define c_WNOWAIT_h_

#include "_internal/_c_define_W.h"

#ifdef __linux__
_c_define_W(NOWAIT, 0x1000000);
#else
#  error
#endif

#endif
