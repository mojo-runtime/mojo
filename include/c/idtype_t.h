#ifndef c_idtype_t_h_
#define c_idtype_t_h_

typedef enum
{
    // http://pubs.opengroup.org/onlinepubs/7908799/xsh/syswait.h.html
    //
    // "The type `idtype_t` is defined as an enumeration type…"

#if defined(__linux__)
    // LINUX/include/uapi/linux/wait.h
    // (The kernel defines these as macros.)
    P_ALL,
    P_PID,
    P_PGID

#elif defined(__FreeBSD__)
    // FREEBSD/sys/sys/wait.h
    P_PID,
    P_PPID,
    P_PGID,
    P_SID,
    P_CID,
    P_UID,
    P_GID,
    P_ALL,
    P_LWPID,
    P_TASKID,
    P_PROJID,
    P_POOLID,
    P_JAILID,
    P_CTID,
    P_CPUID,
    P_PSETID
#else
#  error
#endif
}
idtype_t;

#endif
