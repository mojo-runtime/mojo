#pragma once

#if defined(__arm__)
#  define SYS_getppid 64
#elif defined(__x86_64__)
#  define SYS_getppid 110
#else
#  error
#endif
