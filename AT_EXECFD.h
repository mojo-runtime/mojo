#ifndef c_AT_EXECFD_h_
#define c_AT_EXECFD_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(EXECFD, 2);
#else
#  error
#endif

#endif
