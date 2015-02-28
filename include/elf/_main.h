#ifndef elf_main_h_
#define elf_main_h_

#include "unix/_exit.h"

#include "_Arguments.h"

static
void
_main(_Arguments* __attribute__((__unused__)) arguments);

#if defined(__x86_64__)
#  include "x86_64/_start.asm.h"
#else
#  error
#endif

__attribute__((__noreturn__, __nothrow__, __used__))
static
void
__start(_Arguments* arguments)
{
    _main(arguments);
    _exit(0);
}

#endif
