#pragma once

#if defined(__arm__)
#  define SYS_vfork 190
#elif defined(__x86_64__)
#  define SYS_vfork 58
#else
#  error
#endif
