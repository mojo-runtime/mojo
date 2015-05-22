#pragma once

#if defined(__arm__)
#  define SYS_mmap 90
#elif defined(__x86_64__)
#  define SYS_mmap 9
#else
#  error
#endif
