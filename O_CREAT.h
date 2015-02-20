#ifndef c_O_CREAT_h_
#define c_O_CREAT_h_

#include "_c_define_O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(CREAT, 0100); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
