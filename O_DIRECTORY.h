#ifndef c_O_DIRECTORY_h_
#define c_O_DIRECTORY_h_

#include "_define/O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(DIRECTORY, 0200000); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
