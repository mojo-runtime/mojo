#ifndef unix_puts_h_
#define unix_puts_h_

#include "c/EOF.h"
#include "c/STDOUT_FILENO.h"
#include "c/alloca.h"
#include "c/memcpy.h"
#include "c/strlen.h"
#include "c/_c_nothrow.h"
#include "c/_c_reinterpret_cast.h"

#include "SYS_write.h"
#include "_syscall_3.h"
#include "_syscall_Result_is_error.h"

_c_nothrow
static
int
puts(const char* string)
{
    size_t
    string_length = strlen(string);

    size_t
    length = string_length + 1;

    void*
    data = alloca(length);

    memcpy(data, string, string_length);

    _c_reinterpret_cast(char*, data)[string_length] = '\n';

    return _syscall_Result_is_error(
        _syscall_3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

#endif
