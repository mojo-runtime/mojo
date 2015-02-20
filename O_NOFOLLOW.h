#ifndef c_O_NOFOLLOW_h_
#define c_O_NOFOLLOW_h_

#include "_c_define_O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(NOFOLLOW, 0400000); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
