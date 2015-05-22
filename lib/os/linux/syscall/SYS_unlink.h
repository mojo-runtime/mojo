#pragma once

#if defined(__arm__)
#  define SYS_unlink 10
#elif defined(__x86_64__)
#  define SYS_unlink 87
#else
#  error
#endif
