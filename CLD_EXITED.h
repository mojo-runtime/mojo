#ifndef c_CLD_EXITED_h_
#define c_CLD_EXITED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_EXITED =
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
