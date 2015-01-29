#ifndef _c__DT_SOCK_h
#define _c__DT_SOCK_h

#include "c/DirectoryEntryKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const DirectoryEntryKind
DT_SOCK =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
