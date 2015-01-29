#ifndef _c__SYS_write_h
#define _c__SYS_write_h

#include "c/_SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SystemCallNumber
SYS_write =
#ifdef __linux__
#  ifdef __x86_64__
 1
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
