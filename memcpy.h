#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "extension/x_noexcept.h"

#include "size_t.h"
#include "_c_reinterpret_cast.h"

static
void*
memcpy(void* target, const void* source, size_t bytes) x_noexcept
{
    // Placeholder implementation

    char*
    target_bytes = _c_reinterpret_cast(char*, target);

    const char*
    source_bytes = _c_reinterpret_cast(const char*, source);

    char*
    target_bytes_end = target_bytes + bytes;

    while (target_bytes != target_bytes_end) {
        *target_bytes++ = *source_bytes++;
    }

    return target;
}

#endif
