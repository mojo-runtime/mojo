#ifndef _c__puts_h
#define _c__puts_h

#include "c/EOF.h"
#include "c/STDOUT_FILENO.h"
#include "c/strlen.h"
#include "c/_sys_write.h"
#include "c/_SystemCallResult_is_error.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
int
puts(const char* data)
{
    return _SystemCallResult_is_error(
        _sys_write(
            STDOUT_FILENO,
            data,
            strlen(data)
        )
    ) ? EOF : 0;
}

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
