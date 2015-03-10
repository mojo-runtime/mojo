#ifndef _linux_sigval_t_h_
#define _linux_sigval_t_h_

typedef union
{
    // LINUX/include/uapi/asm-generic/siginfo.h
    int   sival_int;
    void* sival_ptr;
}
sigval_t;

#endif
