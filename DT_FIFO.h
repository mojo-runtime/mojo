#ifndef c_DT_FIFO_h_
#define c_DT_FIFO_h_

#include "_define/DT_.h"

#if defined(__linux__)
_c_define_DT_(FIFO, 1);
#else
#  error
#endif

#endif
