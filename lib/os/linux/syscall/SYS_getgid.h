#pragma once

#if defined(__arm__)
#  define SYS_getgid 47
#elif defined(__x86_64__)
#  define SYS_getgid 104
#else
#  error
#endif
