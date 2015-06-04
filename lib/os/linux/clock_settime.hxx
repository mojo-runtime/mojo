#pragma once

#if defined(__arm__)
#  define __NR_clock_settime 262
#elif defined(__x86_64__)
#  define __NR_clock_settime 227
#else
#  error
#endif

#error
