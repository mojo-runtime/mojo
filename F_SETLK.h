#ifndef c_F_SETLK_h_
#define c_F_SETLK_h_

#include "_define/F_.h"

#ifdef __linux__
#  if defined(__alpha__) || defined(__sparc__)
_c_define_F_(SETLK, 8);
#  else
_c_define_F_(SETLK, 6);
#  endif
#else
#  error
#endif

#endif
