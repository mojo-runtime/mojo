#ifndef _c__EPOLLONESHOT_h
#define _c__EPOLLONESHOT_h

#include "c/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _EpollEvents
EPOLLONESHOT =
#ifdef __linux__
 (1 << 30)
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
