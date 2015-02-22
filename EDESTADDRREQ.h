#ifndef c_EDESTADDRREQ_h_
#define c_EDESTADDRREQ_h_

#include "_internal/_c_define_E.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_E(DESTADDRREQ, 89); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
