#ifndef c_EPIPE_h_
#define c_EPIPE_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(PIPE, 32);
#else
#  error
#endif

#endif
