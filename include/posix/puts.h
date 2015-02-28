#ifndef c_posix_puts_h_
#define c_posix_puts_h_

#include "c/EOF.h"
#include "c/alloca.h"
#include "c/memcpy.h"
#include "c/strlen.h"
#include "compat/_Nothrow.h"
#include "compat/_c_reinterpret_cast.h"

#include "STDOUT_FILENO.h"
#include "SYS_write.h"
#include "_system_call_3.h"
#include "_system_Result_is_error.h"

_Nothrow
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

    return _system_Result_is_error(
        _system_call_3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

#endif
