#ifndef _c__EPOLLET_h
#define _c__EPOLLET_h

#include "c/alias/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLET =
#ifdef __linux__
 0x80000000
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
