#pragma once

#if defined(__arm__)
#  define SYS_getuid 24
#elif defined(__x86_64__)
#  define SYS_getuid 102
#else
#  error
#endif
