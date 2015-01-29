#ifndef _c__DT_CHR_h
#define _c__DT_CHR_h

#include "c/_DirentType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _DirentType
DT_CHR =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
