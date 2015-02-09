#ifndef c_DT_SOCK_h_
#define c_DT_SOCK_h_

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
