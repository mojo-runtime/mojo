#ifndef c_SYS_kill_h_
#define c_SYS_kill_h_

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_kill =
#ifdef __linux__
#  ifdef __x86_64__
 62
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
