#ifndef c_ENOMEM_h_
#define c_ENOMEM_h_

#include "_define/E.h"

#ifdef __linux__
_c_define_E(NOMEM, 12);
#else
#  error
#endif

#endif
