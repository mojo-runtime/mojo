#ifndef _c__PROT_READ_h
#define _c__PROT_READ_h

#include "c/_ProtectionFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ProtectionFlags
PROT_READ =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
