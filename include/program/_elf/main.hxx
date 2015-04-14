#pragma once

#include "os/exit.hxx"
#include "Arguments.hxx"

namespace program { inline namespace _elf_ {

static
void
main(Arguments&);

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern "C" {

__attribute__((__noreturn__, __used__))
static
void
__start(Arguments& arguments) noexcept
{
    main(arguments);
    os::exit(0);
}

} // extern "C"

//--------------------------------------------------------------------------------------------------

}}
