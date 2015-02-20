#ifndef c_TCSETS_h_
#define c_TCSETS_h_

#include "_define/TC.h"

#ifdef __linux__
_c_define_TC(SETS, 0x5402);
#else
#  error
#endif

#endif
