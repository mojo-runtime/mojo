#ifndef _c__SYS_mmap_h
#define _c__SYS_mmap_h

#include "c/_SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _SystemCallNumber
SYS_mmap =
#ifdef __linux__
#  ifdef __x86_64__
 9
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
