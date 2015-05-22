#pragma once

#if defined(__arm__)
#  define SYS_kill 37
#elif defined(__x86_64__)
#  define SYS_kill 62
#else
#  error
#endif
