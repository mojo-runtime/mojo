#ifndef c_close_h_
#define c_close_h_

#include "c/noexcept.h"
#include "c/SYS_close.h"
#include "c/_c_syscall1.h"

__c_namespace_open

static
SystemCallResult
close_(int fd) noexcept
{
    return _c_syscall1(SYS_close, fd);
}

__c_namespace_close

#endif
