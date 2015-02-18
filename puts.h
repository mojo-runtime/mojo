#ifndef c_puts_h_
#define c_puts_h_

#include "c/EOF.h"
#include "c/STDOUT_FILENO.h"
#include "c/SYS_write.h"
#include "c/SystemCallResult_is_error.h"
#include "c/alloca.h"
#include "c/memcpy_.h"
#include "c/noexcept.h"
#include "c/strlen.h"
#include "c/_c_reinterpret_cast.h"
#include "c/_c_syscall3.h"

__c_namespace_open

static
int
puts(const char* string) noexcept
{
    size_t
    string_length = strlen(string);

    size_t
    length = string_length + 1;

    void*
    data = alloca(length);

    memcpy_(data, string, string_length);

    _c_reinterpret_cast(char*, data)[string_length] = '\n';

    return SystemCallResult_is_error(
        _c_syscall3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

__c_namespace_close

#endif
