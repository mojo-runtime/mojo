#ifndef c_PROT_WRITE_h_
#define c_PROT_WRITE_h_

#include "_define/PROT_.h"

#ifdef __linux__
_c_define_PROT_(WRITE, 2);
#else
#  error
#endif

#endif
