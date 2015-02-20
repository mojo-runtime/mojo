#ifndef c_SIGABRT_h_
#define c_SIGABRT_h_

#include "_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(ABRT, 6);
#else
#  error
#endif

#endif
