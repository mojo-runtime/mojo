#ifndef _c__EPOLLIN_h
#define _c__EPOLLIN_h

#include "c/POLLIN.h"
#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLIN =
#ifdef __linux__
 POLLIN
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
