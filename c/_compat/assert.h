#pragma once

#if defined(NDEBUG)
#  define assert(x)
#else
#  define assert(x)                                                     \
    ((x) ? ((void)0) : __assertion_error(__FILE__, __PRETTY_FUNCTION__, __LINE__, #x))

__attribute__((__noreturn__, __nothrow__))
extern
void
__assertion_error(const char*, const char*, unsigned int, const char*); // TODO

#endif
