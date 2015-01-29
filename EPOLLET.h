#ifndef _c__EPOLLET_h
#define _c__EPOLLET_h

#include "c/alias/EpollEvents.h"
#include "c/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLET =
#ifdef __linux__
// Officially an int, this definition causes overflow (for int=32bit).
// static const EpollEvents EPOLLET = (1 << 31);
 __c_STATIC_CAST(EpollEvents, 1U << 31)
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
