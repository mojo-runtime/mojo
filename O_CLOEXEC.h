#ifndef _c__O_CLOEXEC_h
#define _c__O_CLOEXEC_h

#include "c/alias/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_CLOEXEC =
#ifdef __linux__
#  ifdef __x86_64__
 02000000 // generic
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
