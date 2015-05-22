#pragma once

#if defined(__arm__)
#  define SYS_waitid 280
#elif defined(__x86_64__)
#  define SYS_waitid 247
#else
#  error
#endif
