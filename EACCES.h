#ifndef c_EACCES_h_
#define c_EACCES_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(ACCES, 13);
#else
#  error
#endif

#endif
