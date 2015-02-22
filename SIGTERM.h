#ifndef c_SIGTERM_h_
#define c_SIGTERM_h_

#include "_internal/_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(TERM, 15);
#else
#  error
#endif

#endif
