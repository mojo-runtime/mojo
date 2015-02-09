#ifndef c_CLD_KILLED_h_
#define c_CLD_KILLED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_KILLED =
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
