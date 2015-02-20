#ifndef c_ETXTBSY_h_
#define c_ETXTBSY_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(TXTBSY, 26);
#else
#  error
#endif

#endif
