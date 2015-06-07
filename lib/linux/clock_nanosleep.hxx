#pragma once

#if defined(__arm__)
#  define __NR_clock_nanosleep 265
#elif defined(__x86_64__)
#  define __NR_clock_nanosleep 230
#else
#  error
#endif

#error
