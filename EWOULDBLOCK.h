#ifndef c_EWOULDBLOCK_h_
#define c_EWOULDBLOCK_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
#  include "EAGAIN.h"
_c_define_E(WOULDBLOCK, EAGAIN);
#else
#  error
#endif

#endif
