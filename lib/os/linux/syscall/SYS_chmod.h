#pragma once

#if defined(__arm__)
#  define SYS_chmod 15
#elif defined(__x86_64__)
#  define SYS_chmod 90
#else
#  error
#endif
