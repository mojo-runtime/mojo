#pragma once

#if defined(__arm__)
#  define SYS_write 4
#elif defined(__x86_64__)
#  define SYS_write 1
#else
#  error
#endif
