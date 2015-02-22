#ifndef c_puts_h_
#define c_puts_h_

#include "x/x_noexcept.h"
#include "x/x_reinterpret_cast.h"

#include "c/EOF.h"
#include "c/STDOUT_FILENO.h"
#include "c/SYS_write.h"
#include "c/alloca.h"
#include "c/memcpy.h"
#include "c/strlen.h"
#include "c/_c_syscall3.h"
#include "c/_c_syscall_failed.h"

_c_namespace

static
int
puts(const char* string) x_noexcept
{
    size_t
    string_length = strlen(string);

    size_t
    length = string_length + 1;

    void*
    data = alloca(length);

    memcpy_(data, string, string_length);

    x_reinterpret_cast(char*, data)[string_length] = '\n';

    return _c_syscall_failed(
        _c_syscall3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

_c_namespace_end

#endif
