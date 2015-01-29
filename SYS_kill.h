#ifndef _c__SYS_kill_h
#define _c__SYS_kill_h

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
