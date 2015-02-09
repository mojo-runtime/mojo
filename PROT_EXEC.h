#ifndef c_PROT_EXEC_h_
#define c_PROT_EXEC_h_

#include "c/MemoryProtection.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryProtection
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
