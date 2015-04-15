#pragma once

#include "EXIT_FAILURE.h"
#include "_Exit.h"
#include "compat/__noexcept.h"
#include "compat/__noreturn.h"

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "SYS_write.h"
#  include "strlen.h"
#  include "abi/__syscall.h"
#  include "compat/__reinterpret_cast.h"
#  define _write(string) __syscall_3(SYS_write, STDERR_FILENO, __reinterpret_cast(__Word, string), strlen(string))
#else
#  error
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"

__noreturn
static inline
void
__debug_error(const char* kind, const char* message, const char* file, const char* function, unsigned line) __noexcept
{
    // Super naive.
    _write("\033[31;1m");
    _write(kind);
    _write(":\033[0m ");
    _write(message);
    _write("\n  * function: ");
    _write(function);
    _write("\n  * file:     ");
    _write(file);
    _write("\n  * line:     TODO");
    _write("\n");

    _Exit(EXIT_FAILURE);
}

#pragma clang diagnostic pop

#undef _write
