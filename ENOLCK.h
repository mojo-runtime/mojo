#ifndef c_ENOLCK_h_
#define c_ENOLCK_h_

#include "_define/E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(NOLCK, 37); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
