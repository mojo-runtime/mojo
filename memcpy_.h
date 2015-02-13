#ifndef c_memcpy_h_
#define c_memcpy_h_

#include "c/size_t.h"
#include "c/_c_reinterpret_cast.h"

__c_namespace_open

static
void
memcpy_(void* target, const void* source, size_t bytes)
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
}

__c_namespace_close

#endif
