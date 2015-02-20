#ifndef c_EIO_h_
#define c_EIO_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(IO, 5);
#else
#  error
#endif

#endif
