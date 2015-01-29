#ifndef _c__O_DIRECTORY_h
#define _c__O_DIRECTORY_h

#include "c/alias/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_DIRECTORY =
#ifdef __linux__
#  ifdef __x86_64__
 0200000 // generic
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
