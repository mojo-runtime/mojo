#pragma once

#if defined(__arm__)
#  define SYS_tgkill 268
#elif defined(__x86_64__)
#  define SYS_tgkill 234
#else
#  error
#endif
