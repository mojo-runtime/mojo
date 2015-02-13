#ifndef c_execve_h_
#define c_execve_h_

#include "c/noexcept.h"
#include "c/SYS_execve.h"
#include "c/_c_syscall3.h"

__c_namespace_open

static
SystemCallResult
execve_(const char* path, char* const argv[], char* const envp[]) noexcept
{
    return _c_syscall3(SYS_execve, path, argv, envp);
}

__c_namespace_close

#endif
