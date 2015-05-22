#pragma once

#if defined(__arm__)
#  define SYS_chown 182
#elif defined(__x86_64__)
#  define SYS_chown 92
#else
#  error
#endif
