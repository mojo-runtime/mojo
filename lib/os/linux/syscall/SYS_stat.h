#pragma once

#if defined(__arm__)
#  define SYS_stat 106
#elif defined(__x86_64__)
#  define SYS_stat 4
#else
#  error
#endif
