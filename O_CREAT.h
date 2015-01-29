#ifndef _c__O_CREAT_h
#define _c__O_CREAT_h

#include "c/_OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _OpenFlags
O_CREAT =
#ifdef __linux__
#  ifdef __x86_64__
 0100 // generic
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
