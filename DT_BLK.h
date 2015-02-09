#ifndef c_DT_BLK_h_
#define c_DT_BLK_h_

#include "c/DirectoryEntryKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const DirectoryEntryKind
DT_BLK =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
