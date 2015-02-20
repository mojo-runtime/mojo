#ifndef c_EDQUOT_h_
#define c_EDQUOT_h_

#include "_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(DQUOT, 122); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
