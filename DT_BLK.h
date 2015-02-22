#ifndef c_DT_BLK_h_
#define c_DT_BLK_h_

#include "_internal/_c_define_DT_.h"

#if defined(__linux__)
_c_define_DT_(BLK, 6);
#else
#  error
#endif

#endif
