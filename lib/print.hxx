#pragma once

#include "os/write.hxx"

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

    return os::write(1, buffer, n + 1);
}
