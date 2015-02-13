#ifndef c_div_t_h_
#define c_div_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

// Minimum (POSIX) definition

typedef struct
{
    int
    quot;

    int
    rem;
}
div_t;

__c_namespace_close

#endif
