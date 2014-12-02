#ifndef _c__linux__EPOLLHUP_h
#define _c__linux__EPOLLHUP_h

#include "c/linux/POLLHUP.h"
#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLHUP = POLLHUP; // does not exist in the kernel

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
