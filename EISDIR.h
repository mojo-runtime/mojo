#ifndef c_EISDIR_h_
#define c_EISDIR_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(ISDIR, 21);
#else
#  error
#endif

#endif
