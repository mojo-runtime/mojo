#ifndef c_O_RDWR_h_
#define c_O_RDWR_h_

#include "_define/O_.h"

#ifdef __linux__
_c_define_O_(RDWR, 2);
#else
#  error
#endif

#endif
