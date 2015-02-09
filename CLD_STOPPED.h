#ifndef c_CLD_STOPPED_h_
#define c_CLD_STOPPED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_STOPPED =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
