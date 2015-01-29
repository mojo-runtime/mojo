#ifndef _c__PROT_EXEC_h
#define _c__PROT_EXEC_h

#include "c/_ProtectionFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ProtectionFlags
PROT_EXEC =
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
