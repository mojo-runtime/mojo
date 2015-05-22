#pragma once

#if defined(__arm__)
#  define SYS_getegid 50
#elif defined(__x86_64__)
#  define SYS_getegid 108
#else
#  error
#endif
