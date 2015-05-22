#pragma once

#if defined(__arm__)
#  define SYS_pause 29
#elif defined(__x86_64__)
#  define SYS_pause 34
#else
#  error
#endif
