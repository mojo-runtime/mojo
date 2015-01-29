#ifndef _c__EPOLLERR_h
#define _c__EPOLLERR_h

#include "c/POLLERR.h"
#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLERR =
#ifdef __linux__
 POLLERR
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
