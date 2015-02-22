#ifndef c_ESPIPE_h_
#define c_ESPIPE_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(SPIPE, 29);
#else
#  error
#endif

#endif
