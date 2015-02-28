__asm__(
    ".globl _start\n\t"
    ".type _start,@function\n\t"
    "_start:\n\t"

    // %rbp The content of this register is unspecified at process initialization time,
    //      but the user code should mark the deepest stack frame by setting the
    //      frame pointer to zero.

    "xor %rbp, %rbp\n\t"

    // %rdx A function pointer that the application should register with atexit (BA_OS).

    // TODO?

    // %rsp The stack pointer holds the address of the lowest address which is part of the stack.
    //      It is guaranteed to be 16-byte aligned at process entry.

    "mov %rsp, %rdi\n\t" // rdi → argument 1

    "call __start\n\t"
);
