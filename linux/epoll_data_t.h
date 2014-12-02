#ifndef _c__linux__epoll_data_t_h
#define _c__linux__epoll_data_t_h

#include "c/linux/_FileDescriptor.h"
#include "c/uint32_t.h"
#include "c/uint64_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

// This union is not defined in the linux source,
// which uses a uint64_t in its place.

typedef union
{
    void*
    ptr;

    _FileDescriptor
    fd;

    uint32_t
    u32;

    uint64_t
    u64;
}
 epoll_data_t;

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
