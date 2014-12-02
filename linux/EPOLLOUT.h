#ifndef _c__linux__EPOLLOUT_h
#define _c__linux__EPOLLOUT_h

#include "c/linux/POLLOUT.h"
#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLOUT = POLLOUT; // does not exist in the kernel

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
