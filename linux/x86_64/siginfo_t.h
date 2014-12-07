#ifndef _c__linux__x86_64__siginfo_t_h
#define _c__linux__x86_64__siginfo_t_h

#include "c/int16_t.h"
#include "c/linux/x86_64/clock_t.h"
#include "c/linux/x86_64/pid_t.h"
#include "c/linux/x86_64/sigval_t.h"
#include "c/linux/x86_64/uid_t.h"
#include "c/linux/x86_64/_BandEvent.h"
#include "c/linux/x86_64/_ErrorNumber.h"
#include "c/linux/x86_64/_ExitStatus.h"
#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_SignalCode.h"
#include "c/linux/x86_64/_SignalNumber.h"
#include "c/linux/x86_64/_TimerId.h"
#include "c/linux/x86_64/_TimerOverrunCount.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

typedef struct siginfo
{
    // Explicit padding for -Wpadded

    _SignalNumber
    si_signo;

    _ErrorNumber
    si_errno;

    _SignalCode
    si_code;

    char
    __padding[4];

    union
    {
        /*
         * int _pad[__SI_PAD_SIZE];
         *
         * LINUX/arch/x86/include/uapi/asm/siginfo.h:
         *   #define __ARCH_SI_PREAMBLE_SIZE (4 * sizeof(int))
         *                                 =  4 * 4
         *                                 =  16
         *
         * LINUX/include/uapi/asm-generic/siginfo.h:
         *   #define SI_MAX_SIZE 128
         *
         *   #ifndef SI_PAD_SIZE      (which is the case for x86_64)
         *   #define SI_PAD_SIZE ((SI_MAX_SIZE - __ARCH_SI_PREAMBLE_SIZE) / sizeof(int))
         *                       ((         128 - 16                    ) / 4
         *                                                            112 / 4
         *                                                                 28
         * x sizeof(int) = 112
         */
        char
        __padding[112];

        struct
        {
            pid_t
            _pid;

            uid_t
            _uid;
        }
        _kill;

        struct
        {
            _TimerId
            _tid;

            _TimerOverrunCount
            _overrun;

            sigval_t
            _sigval;
        }
        _timer;

        struct
        {
            pid_t
            _pid;

            uid_t
            _uid;

            sigval_t
            _sigval;
        }
        _rt;

        struct
        {
            pid_t
            _pid;

            uid_t
            _uid;

            _ExitStatus
            _status;

            char
            __padding[4];

            clock_t
            _utime;

            clock_t
            _stime;
        }
        _sigchld;

        struct
        {
            _VoidPointer
            _addr;

            int16_t // short
            _addr_lsb;

            char
            __padding[6];
        }
        _sigfault;

        struct
        {
            _BandEvent
            _band;

            _FileDescriptor
            _fd;

            char
            __padding[4];
        }
        _sigpoll;

        struct
        {
            _VoidPointer
            _call_addr;

            int32_t // int
            _syscall;

            uint32_t // unsigned int
            _arch;
        }
        _sigsys;
    }
    _sifields;
}
siginfo_t;

// TODO: is it possible to not use macros?
#define si_pid       _sifields._kill._pid
#define si_uid       _sifields._kill._uid
#define si_timerid   _sifields._timer._tid
#define si_overrun   _sifields._timer._overrun
#define si_status    _sifields._sigchld._status
#define si_utime     _sifields._sigchld._utime
#define si_stime     _sifields._sigchld._stime
#define si_value     _sifields._rt._sigval
#define si_int       _sifields._rt._sigval.sival_int
#define si_ptr       _sifields._rt._sigval.sival_ptr
#define si_addr      _sifields._sigfault._addr
#define si_addr_lsb  _sifields._sigfault._addr_lsb
#define si_band      _sifields._sigpoll._band
#define si_fd        _sifields._sigpoll._fd
#define si_call_addr _sifields._sigsys._call_addr
#define si_syscall   _sifields._sigsys._syscall
#define si_arch      _sifields._sigsys._arch

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
