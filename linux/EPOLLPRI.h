#ifndef _c__linux__EPOLLPRI_h
#define _c__linux__EPOLLPRI_h

#include "c/linux/POLLPRI.h"
#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLPRI = POLLPRI; // does not exist in the kernel

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
