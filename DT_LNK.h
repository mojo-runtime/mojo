#ifndef c_DT_LNK_h_
#define c_DT_LNK_h_

#include "_internal/_c_define_DT_.h"

#if defined(__linux__)
_c_define_DT_(LNK, 10);
#else
#  error
#endif

#endif
