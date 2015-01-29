#ifndef _c__P_ALL_h
#define _c__P_ALL_h

#include "c/idtype_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const idtype_t
P_ALL =
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
