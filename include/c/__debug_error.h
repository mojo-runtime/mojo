#pragma once

#include "EXIT_FAILURE.h"
#include "_Exit.h"
#include "__noreturn.h"
#include "__nothrow.h"
#include "__unused.h"

#if defined(__unix__)
#  include "STDERR_FILENO.h"
#  include "SYS_write.h"
#  include "strlen.h"
#  include "__syscall.h"
#  include "__reinterpret_cast.h"
#  define _write(string) __syscall_3(SYS_write, STDERR_FILENO, __reinterpret_cast(__Word, string), strlen(string))
#else
#  error
#endif

__noreturn
__nothrow
static inline
void
__debug_error(const char* kind, const char* message, const char* file, const char* function, __unused unsigned line)
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

#undef _write
