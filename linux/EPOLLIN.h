#ifndef _c__linux__EPOLLIN_h
#define _c__linux__EPOLLIN_h

#include "c/linux/POLLIN.h"
#include "c/linux/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollEvents EPOLLIN = POLLIN; // does not exist in the kernel

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
