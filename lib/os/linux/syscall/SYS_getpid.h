#pragma once

#if defined(__arm__)
#  define SYS_getpid 20
#elif defined(__x86_64__)
#  define SYS_getpid 39
#else
#  error
#endif
