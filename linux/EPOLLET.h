#ifndef _c__linux__EPOLLET_h
#define _c__linux__EPOLLET_h

#include "c/linux/_EpollEvents.h"
#include "c/__internal/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

// Officially an int, this definition causes overflow (for int=32bit).
// static const _EpollEvents EPOLLET = (1 << 31);
static const _EpollEvents EPOLLET = __c_STATIC_CAST(_EpollEvents, 1U << 31);

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
