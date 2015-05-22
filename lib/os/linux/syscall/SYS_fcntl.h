#pragma once

#if defined(__arm__)
#  define SYS_fcntl 55
#elif defined(__x86_64__)
#  define SYS_fcntl 72
#else
#  error
#endif
