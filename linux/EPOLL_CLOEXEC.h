#ifndef _c__linux__EPOLL_CLOEXEC_h
#define _c__linux__EPOLL_CLOEXEC_h

#include "c/linux/O_CLOEXEC.h"
#include "c/linux/_EpollCreate1Flags.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _EpollCreate1Flags EPOLL_CLOEXEC = O_CLOEXEC;

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
