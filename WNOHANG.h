#ifndef c_WNOHANG_h_
#define c_WNOHANG_h_

#include "_internal/_c_define_W.h"

#ifdef __linux__
_c_define_W(NOHANG, 1);
#else
#  error
#endif

#endif
