#ifndef _c__SYS_rmdir_h
#define _c__SYS_rmdir_h

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_rmdir =
#ifdef __linux__
#  ifdef __x86_64__
 84
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
