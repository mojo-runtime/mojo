#ifndef c_O_NONBLOCK_h_
#define c_O_NONBLOCK_h_

#include "_define/O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(NONBLOCK, 04000); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
