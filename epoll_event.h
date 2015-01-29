#ifndef _c__epoll_event_h
#define _c__epoll_event_h

#include "c/epoll_data_t.h"
#include "c/uint32_t.h"

#ifdef __cplusplus
inline namespace c {
#endif

struct epoll_event
{
#ifdef __linux__
    uint32_t
    events;

    epoll_data_t
    data;
#else
#  error
#endif
};

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
