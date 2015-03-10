#ifndef _linux_struct_epoll_event_h_
#define _linux_struct_epoll_event_h_

#include "c/uint32_t.h"

#include "epoll_data_t.h"

struct epoll_event
{
    uint32_t
    events;

    epoll_data_t
    data;
};

#endif
