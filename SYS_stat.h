#ifndef _c__SYS_stat_h
#define _c__SYS_stat_h

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_stat =
#ifdef __linux__
#  ifdef __x86_64__
 4
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
