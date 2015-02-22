#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "x/x_noexcept.h"
#include "x/x_reinterpret_cast.h"

#include "c/size_t.h"

_c_namespace

static inline
void
memcpy_(void* target, const void* source, size_t bytes) x_noexcept
{
    // Placeholder implementation

    char*
    target_bytes = x_reinterpret_cast(char*, target);

    const char*
    source_bytes = x_reinterpret_cast(const char*, source);

    char*
    target_bytes_end = target_bytes + bytes;

    while (target_bytes != target_bytes_end) {
        *target_bytes++ = *source_bytes++;
    }
}

static inline
void*
memcpy(void* target, const void* source, size_t bytes) x_noexcept
{
    memcpy_(target, source, bytes);
    return target;
}

_c_namespace_end

#endif
