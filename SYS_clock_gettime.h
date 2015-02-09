#ifndef c_SYS_clock_gettime_h_
#define c_SYS_clock_gettime_h_

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_clock_gettime =
#ifdef __linux__
#  ifdef __x86_64__
 228
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
