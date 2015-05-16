#pragma once

#include "c/EXIT_FAILURE.h"
#include "c/_Exit.h"
#include "c/__noreturn.h"
#include "c/__nothrow.h"
#include "c/__unused.h"

#if defined(__unix__)
#  include "c/STDERR_FILENO.h"
#  include "c/SYS_write.h"
#  include "c/strlen.h"
#  include "c/__syscall.h"
#  include "c/__reinterpret_cast.h"
#  define _write(string) __syscall_3(SYS_write, STDERR_FILENO, __reinterpret_cast(__Word, string), strlen(string))
#else
#  error
#endif

__noreturn
__nothrow
static inline
void
__debug_error(const char* kind, const char* file, const char* function, __unused unsigned line, const char* message)
{
    // Super naive.
    _write("\033[31;1m");
    _write(kind);
    _write("\033[0m");
    if (message) {
        _write("\n  • message: ");
        _write(message);
    }
    _write("\n  • function: ");
    _write(function);
    _write("\n  • file:     ");
    _write(file);
    _write("\n  • line:     TODO");
    _write("\n");

    _Exit(EXIT_FAILURE);
}

#undef _write
