#ifndef c_ELOOP_h_
#define c_ELOOP_h_

#include "_define/E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(LOOP, 40); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
