#pragma once

#if defined(__arm__)
#  define SYS_exit 1
#elif defined(__x86_64__)
#  define SYS_exit 60
#else
#  error
#endif
