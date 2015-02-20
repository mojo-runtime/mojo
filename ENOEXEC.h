#ifndef c_ENOEXEC_h_
#define c_ENOEXEC_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(NOEXEC, 8);
#else
#  error
#endif

#endif
