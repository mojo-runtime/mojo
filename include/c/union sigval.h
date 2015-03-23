#pragma once

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
