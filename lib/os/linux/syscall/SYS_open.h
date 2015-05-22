#pragma once

#if defined(__arm__)
#  define SYS_open 5
#elif defined(__x86_64__)
#  define SYS_open 2
#else
#  error
#endif
