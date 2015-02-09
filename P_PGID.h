#ifndef c_P_PGID_h_
#define c_P_PGID_h_

#include "c/idtype_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const idtype_t
P_PGID =
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
