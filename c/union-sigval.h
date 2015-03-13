#ifndef _c_union_sigval_t_h_
#define _c_union_sigval_t_h_

#if defined(__linux__) || defined(__FreeBSD__)
union sigval
{
    // LINUX/include/uapi/asm-generic/siginfo.h
    int
    sival_int;

    void*
    sival_ptr;

#if defined(__FreeBSD__)
    int
    sigval_int;

    void*
    sigval_ptr;
#endif
};

#else
#  error
#endif

#endif
