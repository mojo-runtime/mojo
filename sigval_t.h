#ifndef c_sigval_t_h_
#define c_sigval_t_h_

#include "_internal/_c_namespace.h"

_c_namespace

typedef union
{
#ifdef __linux__
    // LINUX/include/uapi/asm-generic/siginfo.h
    int   sival_int;
    void* sival_ptr;
#else
#  error
#endif
}
sigval_t;

_c_namespace_end

#endif
