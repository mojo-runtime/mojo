#pragma once

#if defined(__arm__)
#  define SYS_execve 11
#elif defined(__x86_64__)
#  define SYS_execve 59
#else
#  error
#endif
