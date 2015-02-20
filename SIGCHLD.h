#ifndef c_SIGCHLD_h_
#define c_SIGCHLD_h_

#include "_c_define_SIG.h"

#ifdef __linux__
#  ifdef __x86_64__
_c_define_SIG(CHLD, 17); // generic
#  else
#    error
#  endif
#else
#  error
#endif

#endif
