#ifndef c_DT_REG_h_
#define c_DT_REG_h_

#include "c/DirectoryEntryKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const DirectoryEntryKind
DT_REG =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
