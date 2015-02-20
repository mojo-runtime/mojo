#ifndef c_MAP_DENYWRITE_h_
#define c_MAP_DENYWRITE_h_

#include "_define/MAP_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_MAP_(DENYWRITE, 0x800); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
