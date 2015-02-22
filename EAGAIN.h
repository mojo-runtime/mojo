#ifndef c_EAGAIN_h_
#define c_EAGAIN_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(AGAIN, 11); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
