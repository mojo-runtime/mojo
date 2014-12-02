#ifndef __c_DIE
#  include "c/EXIT_FAILURE.h"
#  include "c/STDERR_FILENO.h"
#  include "c/strlen.h"
#  include "c/_exit.h"
#  include "c/_write.h"
#  include "c/__c++/__c_NORETURN.h"
#  define __c_DIE(what, message) __die(what, message, __FILE__, __LINE__, __FUNCTION__)

#  ifdef __cplusplus
inline namespace c {
#  endif

static
void
 __write_stderr(const char* data)
{
    _write(STDERR_FILENO, __c_STATIC_CAST(const void*, data), strlen(data));
}
__c_NORETURN
static
void
__die(const char* what, const char* message, const char* file, uint32_t line, const char* function)
{
    // Super naive.
    __write_stderr("\033[31;1m");
    __write_stderr(what);
    __write_stderr(":\033[0m ");
    __write_stderr(message);
    __write_stderr("\n  * function: ");
    __write_stderr(function);
    __write_stderr("\n  * file:     ");
    __write_stderr(file);
    __write_stderr("\n  * line:     TODO");
    __write_stderr("\n");

    _exit(EXIT_FAILURE);
}

#  ifdef __cplusplus
} // inline namespace c
#  endif
#endif
