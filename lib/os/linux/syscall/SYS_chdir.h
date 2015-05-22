#pragma once

#if defined(__arm__)
#  define SYS_chdir 12
#elif defined(__x86_64__)
#  define SYS_chdir 80
#else
#  error
#endif
