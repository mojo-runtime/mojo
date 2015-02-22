#ifndef c_ldiv_t_h_
#define c_ldiv_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

// Minimum (POSIX) definition

typedef struct
{
    long
    quot;

    long
    rem;
}
ldiv_t;

_c_namespace_end

#endif
