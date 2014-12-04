#ifndef _c__linux__x86_64____main___h
#define _c__linux__x86_64____main___h

#include "c/linux/x86_64/_Program.h"

#ifdef __cplusplus
extern "C" {
#endif

__attribute__((used))
__attribute__((visibility("internal")))
void
__main__(const _Program* program); // `program` can be safely omitted by the implementor

#ifdef __cplusplus
} // extern "C"
#endif

__asm__(
    ".globl _start\n\t"
    ".type _start,@function\n\t"

    "_start:\n\t"

    /*
     * %rbp The content of this register is unspecified at process initialization time,
     *      but the user code should mark the deepest stack frame by setting the frame
     *      pointer to zero.
     */

    "xor %rbp, %rbp\n\t"

    /*
     * %rdx A function pointer that the application should register with atexit (BA_OS).
     */

    // TODO?

    /*
     * %rsp The stack pointer holds the address of the byte with lowest address which
     *      is part of the stack. It is guaranteed to be 16-byte aligned at process entry.
     */

     // We use `Program` as an opaque struct around this address.

    "mov %rsp, %rdi\n\t" // %rdi -> argument 1, per the ABI

    // Give 'er a rip, and if...

    "call __main__\n\t"

    // ... we returned normally...

    "movq $60, %rax\n\t"
    "movq $0,  %rdi\n\t"

    // ... _exit(0)

    "syscall"
);

#endif
