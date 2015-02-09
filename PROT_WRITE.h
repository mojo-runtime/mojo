#ifndef c_PROT_WRITE_h_
#define c_PROT_WRITE_h_

#include "c/MemoryProtection.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryProtection
PROT_WRITE =
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
