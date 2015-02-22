#ifndef c_puts_h_
#define c_puts_h_


#include "EOF.h"
#include "STDOUT_FILENO.h"
#include "SYS_write.h"
#include "alloca.h"
#include "memcpy.h"
#include "strlen.h"
#include "x/x_noexcept.h"
#include "x/x_reinterpret_cast.h"
#include "x/x_syscall3.h"
#include "x/x_syscall_failed.h"

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

    return x_syscall_failed(
        x_syscall3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

_c_namespace_end

#endif
