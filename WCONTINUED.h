#ifndef c_WCONTINUED_h_
#define c_WCONTINUED_h_

#include "_define/W.h"

#ifdef __linux__
_c_define_W(CONTINUED, 8);
#else
#  error
#endif

#endif
