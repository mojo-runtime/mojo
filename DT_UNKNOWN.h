#ifndef _c__DT_UNKNOWN_h
#define _c__DT_UNKNOWN_h

#include "c/alias/DirectoryEntryKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const DirectoryEntryKind
DT_UNKNOWN =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
