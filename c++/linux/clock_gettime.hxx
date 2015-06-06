#pragma once

#if defined(__arm__)
#  define __NR_clock_gettime 263
#elif defined(__x86_64__)
#  define __NR_clock_gettime 228
#else
#  error
#endif

#error
