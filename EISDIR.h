#ifndef c_EISDIR_h_
#define c_EISDIR_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(ISDIR, 21);
#else
#  error
#endif

#endif
