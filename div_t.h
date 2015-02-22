#ifndef c_div_t_h_
#define c_div_t_h_

#include "c/_c_namespace.h"

_c_namespace

// Minimum (POSIX) definition

typedef struct
{
    int
    quot;

    int
    rem;
}
div_t;

_c_namespace_end

#endif
