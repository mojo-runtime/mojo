#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "c/size_t.h"
#include "c/REINTERPRET_CAST.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
void
memcpy_(void* target, const void* source, size_t bytes)
{
    // Placeholder implementation

    char*
    target_bytes = REINTERPRET_CAST(char*, target);

    const char*
    source_bytes = REINTERPRET_CAST(const char*, source);

    char*
    target_bytes_end = target_bytes + bytes;

    while (target_bytes != target_bytes_end) {
        *target_bytes++ = *source_bytes++;
    }
}

static
void*
memcpy(void* target, const void* source, size_t bytes)
{
    memcpy_(target, source, bytes);
    return target;
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
