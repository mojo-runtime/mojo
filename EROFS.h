#ifndef c_EROFS_h_
#define c_EROFS_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(ROFS, 30);
#else
#  error
#endif

#endif
