#ifndef _c__DT_LNK_h
#define _c__DT_LNK_h

#include "c/_DirentType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _DirentType
DT_LNK =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
