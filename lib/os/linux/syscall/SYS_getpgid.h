#pragma once

#if defined(__arm__)
#  define SYS_getpgid 132
#elif defined(__x86_64__)
#  define SYS_getpgid 121
#else
#  error
#endif
