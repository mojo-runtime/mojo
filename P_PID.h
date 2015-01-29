#ifndef _c__P_PID_h
#define _c__P_PID_h

#include "c/idtype_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const idtype_t
P_PID =
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
