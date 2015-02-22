#ifndef c_MAP_PRIVATE_h_
#define c_MAP_PRIVATE_h_

#include "_internal/_c_define_MAP_.h"

#ifdef __linux__
_c_define_MAP_(PRIVATE, 2);
#else
#  error
#endif

#endif
