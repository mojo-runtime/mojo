#ifndef c_AT_EGID_h_
#define c_AT_EGID_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(EGID, 14);
#else
#  error
#endif

#endif
