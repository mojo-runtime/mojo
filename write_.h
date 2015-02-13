#ifndef c_write_h_
#define c_write_h_

#include "c/FileDescriptor.h"
#include "c/noexcept.h"
#include "c/size_t.h"
#include "c/SYS_write.h"
#include "c/_c_syscall3.h"

__c_namespace_open

static
SystemCallResult
write_(FileDescriptor fd, const void* data, size_t length) noexcept
{
    return _c_syscall3(SYS_write, fd, data, length);
}

__c_namespace_close

#endif
