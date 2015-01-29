#ifndef _c__POLLERR_h
#define _c__POLLERR_h

#include "c/_PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _PollEvents
POLLERR =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
