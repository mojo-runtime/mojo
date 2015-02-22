#ifndef c_SIGKILL_h_
#define c_SIGKILL_h_

#include "_internal/_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(KILL, 9);
#else
#  error
#endif

#endif
