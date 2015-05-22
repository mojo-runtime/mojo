#pragma once

#if defined(__arm__)
#  define SYS_close 6
#elif defined(__x86_64__)
#  define SYS_close 3
#else
#  error
#endif
