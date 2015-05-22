#pragma once

#if defined(__arm__)
#  define SYS_dup3 358
#elif defined(__x86_64__)
#  define SYS_dup3 292
#else
#  error
#endif
