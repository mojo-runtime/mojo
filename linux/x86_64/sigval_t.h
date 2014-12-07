#ifndef _c__linux__x86_64__sigval_t_h
#define _c__linux__x86_64__sigval_t_h

#include "c/linux/x86_64/_SignalNumber.h"
#include "c/linux/x86_64/_VoidPointer.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

typedef union sigval
{
    _SignalNumber
    sival_int;

    _VoidPointer
    sival_ptr;
}
sigval_t;

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
