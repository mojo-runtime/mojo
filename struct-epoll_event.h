#ifndef c_struct_epoll_event_h_
#define c_struct_epoll_event_h_

#include "c/epoll_data_t.h"
#include "c/uint32_t.h"

__c_namespace_open

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

__c_namespace_close

#endif
