#ifndef c_SIGQUIT_h_
#define c_SIGQUIT_h_

#include "_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(QUIT, 3);
#else
#  error
#endif

#endif
