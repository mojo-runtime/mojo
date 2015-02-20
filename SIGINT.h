#ifndef c_SIGINT_h_
#define c_SIGINT_h_

#include "_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(INT, 2);
#else
#  error
#endif

#endif
