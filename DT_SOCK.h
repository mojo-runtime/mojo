#ifndef c_DT_SOCK_h_
#define c_DT_SOCK_h_

#include "_define/DT_.h"

#if defined(__linux__)
_c_define_DT_(SOCK, 12);
#else
#  error
#endif

#endif
