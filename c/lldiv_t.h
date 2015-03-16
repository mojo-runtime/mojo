#pragma once

#include "compat/__long_long.h"

// Minimum (POSIX) definition

typedef struct
{
    //__long_long
    long long
    quot;

    __long_long
    rem;
}
lldiv_t;
