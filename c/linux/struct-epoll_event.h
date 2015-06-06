#pragma once

#include <std/uint32_t.h>
#include "epoll_data_t.h"

struct epoll_event
{
    uint32_t
    events;

    epoll_data_t
    data;
};
