#ifndef c_DT_UNKNOWN_h_
#define c_DT_UNKNOWN_h_

#include "c/DirectoryEntryKind.h"

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
