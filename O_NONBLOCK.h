#ifndef _c__O_NONBLOCK_h
#define _c__O_NONBLOCK_h

#include "c/_OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _OpenFlags
O_NONBLOCK =
#ifdef __linux__
#  ifdef __x86_64__
 04000 // generic
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
