#pragma once

#if defined(__unix__)
#  include "compat/__noexcept.h"
#  include "compat/__reinterpret_cast.h"
#  include "EOF.h"
#  include "STDOUT_FILENO.h"
#  include "SYS_write.h"
#  include "alloca.h"
#  include "memcpy.h"
#  include "strlen.h"
#  include "__syscall3.h"
#  include "__Result_is_error.h"

static inline
int
puts(const char* string) __noexcept
{
    size_t
    string_length = strlen(string);

    size_t
    length = string_length + 1;

    void*
    data = alloca(length);

    memcpy(data, string, string_length);

    __reinterpret_cast(char*, data)[string_length] = '\n';

    return __Result_is_error(
        __syscall3(
            SYS_write,
            STDOUT_FILENO,
            data,
            length
        )
    ) ? EOF : 1; // nonnegative number on success
}

#else
#  error
#endif
