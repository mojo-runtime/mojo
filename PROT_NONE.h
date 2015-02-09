#ifndef c_PROT_NONE_h_
#define c_PROT_NONE_h_

#include "c/MemoryProtection.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryProtection
PROT_NONE =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
