#ifndef c_O_RDONLY_h_
#define c_O_RDONLY_h_

#include "_internal/_c_define_O_.h"

#ifdef __linux__
_c_define_O_(RDONLY, 0);
#else
#  error
#endif

#endif
