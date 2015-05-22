#pragma once

#if defined(__arm__)
#  define SYS_clock_getres 264
#elif defined(__x86_64__)
#  define SYS_clock_getres 229
#else
#  error
#endif
