#ifndef c_SIGILL_h_
#define c_SIGILL_h_

#include "_internal/_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(ILL, 4);
#else
#  error
#endif

#endif
