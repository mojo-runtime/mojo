#ifndef c_PROT_READ_h_
#define c_PROT_READ_h_

#include "c/MemoryProtection.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryProtection
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
