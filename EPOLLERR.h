#ifndef _c__EPOLLERR_h
#define _c__EPOLLERR_h

#include "c/POLLERR.h"
#include "c/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _EpollEvents
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
