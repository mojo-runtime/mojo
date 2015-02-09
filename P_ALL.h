#ifndef c_P_ALL_h_
#define c_P_ALL_h_

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
