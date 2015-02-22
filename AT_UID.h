#ifndef c_AT_UID_h_
#define c_AT_UID_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(UID, 11);
#else
#  error
#endif

#endif
