#ifndef c_SIGALRM_h_
#define c_SIGALRM_h_

#include "_internal/_c_define_SIG.h"

#ifdef __linux__
_c_define_SIG(ALRM, 14);
#else
#  error
#endif

#endif
