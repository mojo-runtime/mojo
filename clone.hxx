#ifndef linux_clone_hxx_
#define linux_clone_hxx_

#include "c/EAGAIN.h"
#include "c/EINVAL.h"
#include "c/ENOMEM.h"
#include "c/EPERM.h"
#include "c/SYS_clone.h"
#include "c/pid_t.h"
#include "c/struct-pt_regs.h"
#include "c/extension/x_syscall5.h"

#include "linux/Result.hxx"

namespace linux {

static inline
auto
clone(unsigned long flags, void* child_stack, void* ptid, void* ctid, struct pt_regs* regs) noexcept
{
    enum Error
    {
        // Too many processes are already running.
        EAGAIN_ = EAGAIN,

        // CLONE_SIGHAND was specified, but CLONE_VM was not. (Since Linux 2.6.0-test6.)
        //
        // CLONE_THREAD was specified, but CLONE_SIGHAND was not. (Since Linux 2.5.35.)
        //
        // Both CLONE_FS and CLONE_NEWNS were specified in flags.
        //
        // Both CLONE_NEWIPC and CLONE_SYSVSEM were specified in flags.
        //
        // Both CLONE_NEWPID and CLONE_THREAD were specified in flags.
        //
        // Returned by clone() when a zero value is specified for child_stack.
        //
        // CLONE_NEWIPC was specified in flags,
        // but the kernel was not configured with the CONFIG_SYSVIPC and CONFIG_IPC_NS options.
        //
        // CLONE_NEWNET was specified in flags,
        // but the kernel was not configured with the CONFIG_NET_NS option.
        //
        // CLONE_NEWPID was specified in flags,
        // but the kernel was not configured with the CONFIG_PID_NS option.
        //
        // CLONE_NEWUTS was specified in flags,
        // but the kernel was not configured with the CONFIG_UTS option.
        EINVAL_ = EINVAL,

        // Cannot allocate sufficient memory to allocate a task structure for the child,
        // or to copy those parts of the caller's context that need to be copied.
        ENOMEM_ = ENOMEM,

        // CLONE_NEWIPC, CLONE_NEWNET, CLONE_NEWNS, CLONE_NEWPID, or CLONE_NEWUTS
        // was specified by an unprivileged process (process without CAP_SYS_ADMIN).
        //
        // CLONE_PID was specified by a process other than process 0.
        EPERM_ = EPERM,
    };

    return Result<pid_t, Error>(x_syscall5(SYS_clone, flags, child_stack, ptid, ctid, regs));
}

} // namespace linux

#endif
