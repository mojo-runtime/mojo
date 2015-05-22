#pragma once

#if defined(__arm__)
#  define SYS_read 3
#elif defined(__x86_64__)
#  define SYS_read 0
#else
#  error
#endif
