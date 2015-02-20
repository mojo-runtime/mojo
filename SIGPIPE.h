#ifndef c_SIGPIPE_h_
#define c_SIGPIPE_h_

#include "_define/SIG.h"

#ifdef __linux__
_c_define_SIG(PIPE, 13);
#else
#  error
#endif

#endif
