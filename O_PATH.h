#ifndef _c__O_PATH_h
#define _c__O_PATH_h

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_PATH =
#ifdef __linux__
#  ifdef __x86_64__
 010000000 // generic
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
