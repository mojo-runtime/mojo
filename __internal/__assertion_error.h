#ifndef _c____internal____assertion_error_h
#define _c____internal____assertion_error_h

#include "c/EXIT_FAILURE.h"
#include "c/STDERR_FILENO.h"
#include "c/strlen.h"
#include "c/_sys_exit.h"
#include "c/_sys_write.h"
#include "c/__internal/__c_NORETURN.h"
#include "c/__internal/__c_STATIC_CAST.h"
#include "c/__internal/__c_UNUSED.h"

#ifdef __cplusplus
inline namespace c {
#endif

__c_NORETURN
static
void
__assertion_error(const char* expression, const char* file, __c_UNUSED unsigned int line, const char* function)
{

#define __WRITE(data) _sys_write(STDERR_FILENO, __c_STATIC_CAST(const void*, data), strlen(data))

    // Super naive.
    __WRITE("\033[31;1massertion error:\033[0m ");
    __WRITE(expression);
    __WRITE("\n  * function: ");
    __WRITE(function);
    __WRITE("\n  * file:     ");
    __WRITE(file);
    __WRITE("\n  * line:     TODO");
    __WRITE("\n");

#undef __WRITE

    _sys_exit(EXIT_FAILURE);
}

#  ifdef __cplusplus
} // inline namespace c
#  endif

#endif
