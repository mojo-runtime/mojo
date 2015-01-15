#ifndef _c___die_h
#define _c___die_h

#include "c/EXIT_FAILURE.h"
#include "c/STDERR_FILENO.h"
#include "c/strlen.h"
#include "c/_exit.h"
#include "c/_sys_write.h"
#include "c/__c_NORETURN.h"
#include "c/__c_STATIC_CAST.h"
#include "c/__c_UNUSED.h"

#ifdef __cplusplus
inline namespace c {
#endif

__c_NORETURN
static
void
_die(const char* reason, const char* message, const char* file, __c_UNUSED unsigned int line, const char* function)
{

#define __WRITE(data) _sys_write(STDERR_FILENO, __c_STATIC_CAST(const void*, data), strlen(data))

    // Super naive.
    __WRITE("\033[31;1m");
    __WRITE(reason);
    __WRITE(":\033[0m ");
    __WRITE(message);
    __WRITE("\n  * function: ");
    __WRITE(function);
    __WRITE("\n  * file:     ");
    __WRITE(file);
    __WRITE("\n  * line:     TODO");
    __WRITE("\n");

#undef __WRITE

    _exit(EXIT_FAILURE);
}

#  ifdef __cplusplus
} // inline namespace c
#  endif

#endif
