#pragma once

#if defined(__arm__)
#  define SYS_fstatat 327
#elif defined(__x86_64__)
#  define SYS_fstatat 262
#else
#  error
#endif
