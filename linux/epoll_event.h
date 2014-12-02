#ifndef _c__linux__epoll_event_h
#define _c__linux__epoll_event_h

#include "c/linux/epoll_data_t.h"
#include "c/uint32_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

struct epoll_event
{
    uint32_t
    events;

    epoll_data_t
    data;
};

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
