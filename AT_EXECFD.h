#ifndef c_AT_EXECFD_h_
#define c_AT_EXECFD_h_

#include "_define/AT_.h"

#if defined(__linux__)
_c_define_AT_(EXECFD, 2);
#else
#  error
#endif

#endif
