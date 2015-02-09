#ifndef c_CLD_DUMPED_h_
#define c_CLD_DUMPED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_DUMPED =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
