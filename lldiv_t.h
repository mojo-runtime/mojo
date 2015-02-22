#ifndef c_lldiv_t_h_
#define c_lldiv_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

// Minimum (POSIX) definition

typedef struct
{
    long long
    quot;

    long long
    rem;
}
lldiv_t;

_c_namespace_end

#endif
