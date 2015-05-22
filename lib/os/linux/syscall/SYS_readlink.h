#pragma once

#if defined(__arm__)
#  define SYS_readlink 85
#elif defined(__x86_64__)
#  define SYS_readlink 89
#else
#  error
#endif
