#ifndef _c__linux__x86_64___Siginfo__Waitid_h
#define _c__linux__x86_64___Siginfo__Waitid_h

#include "c/linux/x86_64/pid_t.h"
#include "c/linux/x86_64/uid_t.h"
#include "c/linux/x86_64/_ErrorNumber.h"
#include "c/linux/x86_64/_ExitStatus.h"
#include "c/linux/x86_64/_SignalCode.h"
#include "c/linux/x86_64/_SignalNumber.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

typedef struct
{
    _SignalNumber
    si_signo;

    _ErrorNumber
    si_errno;

    _SignalCode
    si_code;

    char
    __padding1[4];

    pid_t
    si_pid;

    uid_t
    si_uid;

    _ExitStatus
    si_status;
}
_Siginfo__Waitid;

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
