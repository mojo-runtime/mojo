#ifndef c_EDEADLK_h_
#define c_EDEADLK_h_

#include "_define/E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(DEADLK, 35); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
