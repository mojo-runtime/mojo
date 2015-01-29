#ifndef _c__epoll_data_t_h
#define _c__epoll_data_t_h

#include "c/uint32_t.h"
#include "c/uint64_t.h"
#include "c/alias/FileDescriptor.h"

#ifdef __cplusplus
inline namespace c {
#endif

#ifdef __linux__

// This union is not defined in the linux source,
// which uses a uint64_t in its place.

typedef union
{
    void*
    ptr;

    FileDescriptor
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

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
