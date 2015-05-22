#pragma once

#if defined(__arm__)
#  define SYS_clone 120
#elif defined(__x86_64__)
#  define SYS_clone 56
#else
#  error
#endif
