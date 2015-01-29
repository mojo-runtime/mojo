#ifndef _c__DT_BLK_h
#define _c__DT_BLK_h

#include "c/_DirentType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _DirentType
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
