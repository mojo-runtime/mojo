#pragma once

#if defined(__arm__)
#  define SYS_fchdir 133
#elif defined(__x86_64__)
#  define SYS_fchdir 81
#else
#  error
#endif
