#ifndef _c_struct_epoll_event_h_
#define _c_struct_epoll_event_h_

#if defined(__linux__)
#  include "epoll_data_t.h"
#  include "uint32_t.h"

struct epoll_event
{
    uint32_t
    events;

    epoll_data_t
    data;
};

#else
#  error
#endif

#endif
