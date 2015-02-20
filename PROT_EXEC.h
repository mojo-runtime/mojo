#ifndef c_PROT_EXEC_h_
#define c_PROT_EXEC_h_

#include "_c_define_PROT_.h"

#ifdef __linux__
_c_define_PROT_(EXEC, 4);
#else
#  error
#endif

#endif
