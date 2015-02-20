#ifndef c_MAP_SHARED_h_
#define c_MAP_SHARED_h_

#include "_define/MAP_.h"

#ifdef __linux__
_c_define_MAP_(SHARED, 1);
#else
#  error
#endif

#endif
