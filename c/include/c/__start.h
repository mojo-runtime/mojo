#pragma once

#include "_Exit.h"
#include "__Arguments.h"

//--------------------------------------------------------------------------------------------------

#if defined(__ELF__)

asm (
    ".global _start\n"

#if defined(__x86_64__)
    ".type _start,@function\n"
    "_start:\n"
    "xor %rbp, %rbp\n"
    "mov %rsp, %rdi\n"
    "call __start\n"
#elif defined(__arm__)
    ".type _start,#function\n"
    "_start:\n"
    "mov fp, #0\n"
    "mov lr, #0\n"
    "mov sp, a1\n"
    "bl __start\n"
#else
#  error
#endif
);

#if defined(__cplusplus)
extern "C" {
#endif

__attribute__((__noreturn__, __nothrow__, __used__))
static
void
__start(__Arguments& arguments)
{
    _main(arguments);
    _Exit(0);
}

#if defined(__cplusplus)
} // extern "C"
#endif

//--------------------------------------------------------------------------------------------------

#else
#  error
#endif
