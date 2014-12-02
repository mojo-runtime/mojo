#ifndef _c__linux__EPOLLWAKEUP_h
#define _c__linux__EPOLLWAKEUP_h

#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLWAKEUP = (1 << 29);

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
