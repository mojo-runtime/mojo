#ifndef c_fork_h_
#define c_fork_h_

#include "c/noexcept.h"
#include "c/SYS_fork.h"
#include "c/_c_syscall0.h"

__c_namespace_open

static
SystemCallResult
fork_() noexcept
{
    return _c_syscall0(SYS_fork);
}

__c_namespace_close

#endif
