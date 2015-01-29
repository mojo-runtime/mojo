#ifndef _c__DT_REG_h
#define _c__DT_REG_h

#include "c/_DirentType.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _DirentType
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
