#pragma once

#include "EXIT_FAILURE.h"
#include "_Exit.h"

__attribute__((__noreturn__, __nothrow__))
static inline
void
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
__assertion_error(const char* x, const char* file, const char* function, unsigned line, const char* message)
#pragma clang diagnostic pop
{
    // TODO
    _Exit(EXIT_FAILURE);
}
