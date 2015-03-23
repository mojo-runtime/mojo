#pragma once

struct pt_regs
{
#if defined(__x86_64__)
    // arch/x86/include/uapi/asm/ptrace.h
    unsigned long r15;
    unsigned long r14;
    unsigned long r13;
    unsigned long r12;
    unsigned long rbp;
    unsigned long rbx;
    unsigned long r11;
    unsigned long r10;
    unsigned long r9;
    unsigned long r8;
    unsigned long rax;
    unsigned long rcx;
    unsigned long rdx;
    unsigned long rsi;
    unsigned long rdi;
    unsigned long orig_rax;
    unsigned long rip;
    unsigned long cs;
    unsigned long eflags;
    unsigned long rsp;
    unsigned long ss;
#elif defined(__arm__)
    // arch/arm/include/uapi/asm/ptrac.h
    long uregs[18];
#else
#  error
#endif
};
