#ifndef c_EOPNOTSUPP_h_
#define c_EOPNOTSUPP_h_

#include "_define/E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(OPNOTSUPP, 95); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
