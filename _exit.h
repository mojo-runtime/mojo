#ifndef _c__exit_h
#define _c__exit_h

#include "c/_sys_exit.h"
#include "c/__internal/__c_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
#endif

__c_NORETURN
static
void
_exit(int status)
{
    _sys_exit(__c_STATIC_CAST(_ExitStatus, status));
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
