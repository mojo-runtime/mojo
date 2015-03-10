#ifndef c_Exit_h_
#define c_Exit_h_

#if defined(__unix__)
#  include "unix/_exit.h"
#else
#  error
#endif

_c_noreturn
_c_nothrow
static inline
void
_Exit(int exit_code)
{
#if defined(__unix__)
    _exit(exit_code);
#else
#  error
#endif
}

#endif
