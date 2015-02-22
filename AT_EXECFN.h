#ifndef c_AT_EXECFN_h_
#define c_AT_EXECFN_h_

#include "_internal/_c_define_AT_.h"

#if defined(__linux__)
_c_define_AT_(EXECFN, 31);
#else
#  error
#endif

#endif
