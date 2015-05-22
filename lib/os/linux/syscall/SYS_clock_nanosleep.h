#pragma once

#if defined(__arm__)
#  define SYS_clock_nanosleep 265
#elif defined(__x86_64__)
#  define SYS_clock_nanosleep 230
#else
#  error
#endif
