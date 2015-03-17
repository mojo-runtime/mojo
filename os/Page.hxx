#pragma once

#include "os/Size.hxx"

namespace os {

struct Page
{
    static
    const Size
    SHIFT =
#if defined(__linux__)
#  if defined(__x86_64__) // generic
    12
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
    12
#else
#  error
#endif
    ;

    static constexpr
    const Size
    SIZE = (1u << SHIFT);

    char
    __[SIZE];
}
__attribute__((__aligned__(Page::SIZE)));

static_assert(alignof(Page) == Page::SIZE);
static_assert(sizeof(Page) == Page::SIZE);

}
