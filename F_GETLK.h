#ifndef c_F_GETLK_h_
#define c_F_GETLK_h_

#include "_define/F_.h"

#ifdef __linux__
#  if defined(__alpha__) || defined(__sparc__)
_c_define_F_(GETLK, 7);
#  elif defined(__mips__)
_c_define_F_(GETLK, 14);
#  else
_c_define_F_(GETLK, 5);
#  endif
#else
#  error
#endif

#endif
