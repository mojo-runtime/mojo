#ifndef _c__linux__EPOLLONESHOT_h
#define _c__linux__EPOLLONESHOT_h

#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLONESHOT = (1 << 30);

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
