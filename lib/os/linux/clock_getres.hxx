#pragma once

#if defined(__arm__)
#  define __NR_clock_getres 264
#elif defined(__x86_64__)
#  define __NR_clock_getres 229
#else
#  error
#endif

#error
