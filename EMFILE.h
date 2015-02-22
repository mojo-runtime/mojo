#ifndef c_EMFILE_h_
#define c_EMFILE_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(MFILE, 24);
#else
#  error
#endif

#endif
