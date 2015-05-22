#pragma once

#if defined(__arm__)
#  define SYS_getdents64 217
#elif defined(__x86_64__)
#  define SYS_getdents64 217
#else
#  error
#endif
