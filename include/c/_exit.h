#ifndef _c_exit_h_
#define _c_exit_h_

#include "compat/__builtin_unreachable.h"
#include "c/_c_noreturn.h"
#include "c/_c_nothrow.h"

#if defined(__unix__)
#  include "SYS_exit.h"
#else
#  error
#endif

_c_noreturn
_c_nothrow
static inline
void
_exit(int status)
{
    // Roll this special case by hand.
#if defined(__linux__) || defined(__FreeBSD__)
#  if defined(__x86_64__)
    // Without a return, these are actually the same
    __asm__ __volatile__ ("syscall" :: "a" (SYS_exit), "D" (status));
#  else
#    error
#  endif
#else
#  error
#endif
    __builtin_unreachable();
}

#endif
