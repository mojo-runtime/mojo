#ifndef _c__linux__EPOLLERR_h
#define _c__linux__EPOLLERR_h

#include "c/linux/POLLERR.h"
#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLERR = POLLERR; // does not exist in the kernel

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
