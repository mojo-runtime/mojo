#ifndef c_AT_RANDOM_h_
#define c_AT_RANDOM_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(RANDOM, 25);
#else
#  error
#endif

#endif
