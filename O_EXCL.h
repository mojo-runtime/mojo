#ifndef _c__O_EXCL_h
#define _c__O_EXCL_h

#include "c/_OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _OpenFlags
O_EXCL =
#ifdef __linux__
#  ifdef __x86_64__
 0200 // generic
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
