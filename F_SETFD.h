#ifndef c_F_SETFD_h_
#define c_F_SETFD_h_

#include "_internal/_c_define_F_.h"

#ifdef __linux__
_c_define_F_(SETFD, 2);
#else
#  error
#endif

#endif
