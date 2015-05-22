#pragma once

#if defined(__arm__)
#  define SYS_getcwd 183
#elif defined(__x86_64__)
#  define SYS_getcwd 79
#else
#  error
#endif
