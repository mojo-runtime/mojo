#ifndef c_SystemCallResult_is_error_h_
#define c_SystemCallResult_is_error_h_

#include "c/bool.h"
#include "c/SystemCallResult.h"
#include "c/_c_static_cast.h"

__c_namespace_open

static
bool
SystemCallResult_is_error(SystemCallResult self)
{
#if defined(__linux__) && defined(__x86_64__)
    return self > _c_static_cast(unsigned long, -4096);
#else
#  error
#endif
}

__c_namespace_close

#endif
