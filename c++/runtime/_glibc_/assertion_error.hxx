#pragma once

namespace runtime { inline namespace _glibc_ {

extern "C" {
void
__assert_fail(const char*, const char*, unsigned, const char*);
}

[[noreturn]]
static inline
void
assertion_error(const char* expression, const char* file, const char* function, unsigned line) noexcept
{
    __assert_fail(expression, file, line, function);
    __builtin_unreachable();
}

}}
