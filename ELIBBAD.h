#ifndef c_ELIBBAD_h_
#define c_ELIBBAD_h_

#include "_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(LIBBAD, 80); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
