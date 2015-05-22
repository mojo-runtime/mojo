#pragma once

#if defined(__arm__)
#  define SYS_openat 322
#elif defined(__x86_64__)
#  define SYS_openat 257
#else
#  error
#endif
