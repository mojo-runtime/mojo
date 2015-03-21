// -*- C -*-

#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "time_t.h"
#  include "suseconds_t.h"

struct timeval
{
    time_t
    tv_sec;

    suseconds_t
    tv_usec;
};

#else
#  error
#endif
