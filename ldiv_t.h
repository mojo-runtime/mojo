#ifndef c_ldiv_t_h_
#define c_ldiv_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

// Minimum (POSIX) definition

typedef struct
{
    long
    quot;

    long
    rem;
}
ldiv_t;

__c_namespace_close

#endif
