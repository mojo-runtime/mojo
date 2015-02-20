#ifndef c_AT_CLKTCK_h_
#define c_AT_CLKTCK_h_

#include "_c_AT_.h"

#if defined(__linux__)
_c_AT_(CLKTCK, 17);
#else
#  error
#endif

#endif
