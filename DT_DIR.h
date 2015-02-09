#ifndef c_DT_DIR_h_
#define c_DT_DIR_h_

#include "c/DirectoryEntryKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const DirectoryEntryKind
DT_DIR =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
