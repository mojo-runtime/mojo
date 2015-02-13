#ifndef c_sigval_t_h_
#define c_sigval_t_h_

#include "c/__c_namespace.h"

__c_namespace_open

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

__c_namespace_close

#endif
