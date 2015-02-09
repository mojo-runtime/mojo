#ifndef c_CLD_TRAPPED_h_
#define c_CLD_TRAPPED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_TRAPPED =
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
