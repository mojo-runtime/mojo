#pragma once

#if defined(__arm__)
#  define SYS_ioctl 54
#elif defined(__x86_64__)
#  define SYS_ioctl 16
#else
#  error
#endif
