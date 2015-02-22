#ifndef c_MAP_ANONYMOUS_h_
#define c_MAP_ANONYMOUS_h_

#include "_internal/_c_define_MAP_.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_MAP_(ANONYMOUS, 0x20); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
