#pragma once

#include "__Byte.h"
#include "__Word.h"

struct __Arguments
{
#if defined(__ELF__)
    __Word
    __argc;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc99-extensions"
    __Byte*
    __argv[]; // At least 1 - NULL terminated
#pragma clang diagnostic pop

#else
#  error
#endif
};

//--------------------------------------------------------------------------------------------------

static inline
__Word
__Arguments_argc(const __Arguments* self)
{
#if defined(__ELF__)
    return self->__argc;
#else
#  error
#endif
}

static inline
__Byte**
__Arguments_argv(__Arguments* self)
{
#if defined(__ELF__)
    return self->__argv;
#else
#  error
#endif
}

static inline
__Byte**
__Arguments_envp(__Arguments* self)
{
#if defined(__ELF__)
    return self->__argv + self->__argc + 1;
#else
#  error
#endif
}
