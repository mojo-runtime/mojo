#ifndef c_AT_GID_h_
#define c_AT_GID_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(GID, 13);
#else
#  error
#endif

#endif
