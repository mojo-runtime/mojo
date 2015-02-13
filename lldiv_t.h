#ifndef c_lldiv_t_h_
#define c_lldiv_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

// Minimum (POSIX) definition

typedef struct
{
    long long
    quot;

    long long
    rem;
}
lldiv_t;

__c_namespace_close

#endif
