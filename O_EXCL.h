#ifndef c_O_EXCL_h_
#define c_O_EXCL_h_

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_EXCL =
#ifdef __linux__
#  ifdef __x86_64__
 0200 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
