#ifndef c_O_NONBLOCK_h_
#define c_O_NONBLOCK_h_

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_NONBLOCK =
#ifdef __linux__
#  ifdef __x86_64__
 04000 // generic
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
