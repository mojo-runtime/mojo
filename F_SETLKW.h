#ifndef c_F_SETLKW_h_
#define c_F_SETLKW_h_

#include "_define/F_.h"

#ifdef __linux__
#  if defined(__alpha__) || defined(__sparc__)
_c_define_F_(SETLKW, 9);
#  else
_c_define_F_(SETLKW, 7);
#  endif
#else
#  error
#endif

#endif
