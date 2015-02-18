#ifndef c_SystemCallResult_error_number_h_
#define c_SystemCallResult_error_number_h_

#include "c/_c_static_cast.h"
#include "c/__c_namespace.h"

__c_namespace_open

static
int
SystemCallResult_error_number(SystemCallResult self)
{
#if defined(__linux__) && defined(__x86_64__)
    return _c_static_cast(int, -self);
#else
#  error
#endif
}

__c_namespace_close

#endif
