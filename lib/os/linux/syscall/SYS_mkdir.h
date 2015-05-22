#pragma once

#if defined(__arm__)
#  define SYS_mkdir 39
#elif defined(__x86_64__)
#  define SYS_mkdir 83
#else
#  error
#endif
