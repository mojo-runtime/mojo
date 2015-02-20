#ifndef c_O_WRONLY_h_
#define c_O_WRONLY_h_

#include "_define/O_.h"

#ifdef __linux__
_c_define_O_(WRONLY, 1);
#else
#  error
#endif

#endif
