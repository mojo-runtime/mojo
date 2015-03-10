#ifndef _linux_x86_64_struct_pt_regs_h_
#define _linux_x86_64_struct_pt_regs_h_

struct pt_regs
{
    // Per: LINUX/arch/x86/include/uapi/asm/ptrace.h
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
};

#endif
