#pragma once

#if defined(__arm__)
#  define SYS_rmdir 40
#elif defined(__x86_64__)
#  define SYS_rmdir 84
#else
#  error
#endif
