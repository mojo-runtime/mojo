#ifndef c_ENXIO_h_
#define c_ENXIO_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
_c_define_E(NXIO, 6);
#else
#  error
#endif

#endif
