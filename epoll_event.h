#ifndef c_epoll_event_h_
#define c_epoll_event_h_

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
