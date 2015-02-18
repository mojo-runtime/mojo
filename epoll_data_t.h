#ifndef c_epoll_data_t_h_
#define c_epoll_data_t_h_

#include "c/uint32_t.h"
#include "c/uint64_t.h"

__c_namespace_open

#ifdef __linux__

// This union is not defined in the linux source,
// which uses a uint64_t in its place.

typedef union
{
    void*
    ptr;

    int
    fd;

    uint32_t
    u32;

    uint64_t
    u64;
}
epoll_data_t;

#else
#  error
#endif

__c_namespace_close

#endif
