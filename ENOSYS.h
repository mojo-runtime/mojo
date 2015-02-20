#ifndef c_ENOSYS_h_
#define c_ENOSYS_h_

#include "_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(NOSYS, 38); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
