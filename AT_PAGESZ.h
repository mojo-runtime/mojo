#ifndef c_AT_PAGESZ_h_
#define c_AT_PAGESZ_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(PAGESZ, 6);
#else
#  error
#endif

#endif
