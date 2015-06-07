#pragma once

#if defined(__linux__)
#  include "linux/write.hxx"
#else
#  error
#endif

template <size_t n>
static
auto
print(const char(& string)[n])
{
    char
    buffer[n + 1];

    for (size_t i = 0; i < n; i++) {
        buffer[i] = string[i];
    }

    buffer[n] = '\n';

#if defined(__linux__)
    return linux::write(1, buffer, n + 1);
#else
#  error
#endif
}
