#ifndef c_P_PGID_h_
#define c_P_PGID_h_

#include "_define/P_.h"

#ifdef __linux__
_c_define_P_(PGID, 2);
#else
#  error
#endif

#endif
