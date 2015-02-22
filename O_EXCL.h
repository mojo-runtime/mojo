#ifndef c_O_EXCL_h_
#define c_O_EXCL_h_

#include "_internal/_c_define_O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(EXCL, 0200); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
