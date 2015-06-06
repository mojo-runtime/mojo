#pragma once

#include <feature/__has_flexible_array.h>
#include <std/uint32_t.h>

struct inotify_event
{
    int
    wd;

    uint32_t
    mask;

    uint32_t
    cookie;

    uint32_t
    len;

#if __has_flexible_array
    char
    name[];
#else
#  error
#endif
};
