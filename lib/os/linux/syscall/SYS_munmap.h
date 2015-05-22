#pragma once

#if defined(__arm__)
#  define SYS_munmap 91
#elif defined(__x86_64__)
#  define SYS_munmap 11
#else
#  error
#endif
