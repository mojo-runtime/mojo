#ifndef c_read_h_
#define c_read_h_

#include "c/FileDescriptor.h"
#include "c/noexcept.h"
#include "c/size_t.h"
#include "c/SYS_read.h"
#include "c/_c_syscall3.h"

__c_namespace_open

static
SystemCallResult
read_(FileDescriptor fd, void* buffer, size_t length) noexcept
{
    return _c_syscall3(SYS_read, fd, buffer, length);
}

__c_namespace_close

#endif
