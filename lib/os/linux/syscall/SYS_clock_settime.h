#pragma once

#if defined(__arm__)
#  define SYS_clock_settime 262
#elif defined(__x86_64__)
#  define SYS_clock_settime 227
#else
#  error
#endif
