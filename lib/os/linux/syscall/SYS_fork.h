#pragma once

#if defined(__arm__)
#  define SYS_fork 2
#elif defined(__x86_64__)
#  define SYS_fork 57
#else
#  error
#endif
