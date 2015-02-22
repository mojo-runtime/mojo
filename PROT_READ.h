#ifndef c_PROT_READ_h_
#define c_PROT_READ_h_

#include "_internal/_c_define_PROT_.h"

#ifdef __linux__
_c_define_PROT_(READ, 1);
#else
#  error
#endif

#endif
