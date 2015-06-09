#pragma once

#include "../types/time_t.h"

struct timespec
{
    time_t
    tv_sec;

    long
    tv_nsec;
};
