#ifndef c_struct_epoll_event_h_
#define c_struct_epoll_event_h_

#include "epoll_data_t.h"
#include "uint32_t.h"

_c_namespace

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

_c_namespace_end

#endif
