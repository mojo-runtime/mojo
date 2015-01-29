#ifndef _c__EPOLLPRI_h
#define _c__EPOLLPRI_h

#include "c/POLLPRI.h"
#include "c/alias/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLPRI =
#ifdef __linux__
 POLLPRI
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
