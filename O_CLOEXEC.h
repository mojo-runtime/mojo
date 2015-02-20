#ifndef c_O_CLOEXEC_h_
#define c_O_CLOEXEC_h_

#include "_define/O_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_O_(CLOEXEC, 02000000); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
