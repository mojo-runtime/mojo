#ifndef c_ENFILE_h_
#define c_ENFILE_h_

#include "_c_define_E.h"

#ifdef __linux__
_c_define_E(NFILE, 23);
#else
#  error
#endif

#endif
