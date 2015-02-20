#ifndef c_SIGFPE_h_
#define c_SIGFPE_h_

#include "_define/SIG.h"

#ifdef __linux__
_c_define_SIG(FPE, 8);
#else
#  error
#endif

#endif
