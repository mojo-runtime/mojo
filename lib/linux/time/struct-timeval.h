#pragma once

#include "../types/time_t.h"
#include "../types/suseconds_t.h"

struct timeval
{
    time_t
    tv_sec;

    suseconds_t
    tv_usec;
};
