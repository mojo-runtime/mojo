#ifndef c_F_DUPFD_h_
#define c_F_DUPFD_h_

#include "_internal/_c_define_F_.h"

#ifdef __linux__
_c_define_F_(DUPFD, 0);
#else
#  error
#endif

#endif
