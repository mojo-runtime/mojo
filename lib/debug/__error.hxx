#pragma once

#include <c/EXIT_FAILURE.h>
#include <c/_Exit.h>

#if defined(__linux__)
#  include <linux/write.hxx>
#  include <c/strlen.h>
#  define _write(string) ::linux::write(2, string, strlen(string))
#else
#  error
#endif

__attribute__((__noreturn__, __nothrow__))
static inline
void
__debug_error(const char* kind,
              const char* file,
              const char* function,
              __attribute__((__unused__)) unsigned line,
              const char* message)
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
