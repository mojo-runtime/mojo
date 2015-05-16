#pragma once

#if defined(__linux__)
#  include "uint32_t.h"
#  include "__flexible_array.h"

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

    char
    __flexible_array(name);
};

#else
#  error
#endif
