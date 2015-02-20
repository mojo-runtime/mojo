#ifndef c_WEXITED_h_
#define c_WEXITED_h_

#include "_c_define_W.h"

#ifdef __linux__
_c_define_W(EXITED, 4);
#else
#  error
#endif

#endif
