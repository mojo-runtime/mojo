#ifndef c_PROT_NONE_h_
#define c_PROT_NONE_h_

#include "_define/PROT_.h"

#ifdef __linux__
_c_define_PROT_(NONE, 0);
#else
#  error
#endif

#endif
