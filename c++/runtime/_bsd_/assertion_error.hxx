#ifndef _runtime_bsd_assertion_error_hxx_
#define _runtime_bsd_assertion_error_hxx_

namespace runtime { inline namespace _bsd_ {

extern "C" {
[[noreturn]]
void
__assert(const char*, const char*, unsigned, const char*) noexcept;
}

[[noreturn]]
static inline
void
assertion_error(const char* expression, const char* file, const char* function, unsigned line) noexcept
{
    __assert(function, file, line, expression);
    __builtin_unreachable();
}

}}

#endif
