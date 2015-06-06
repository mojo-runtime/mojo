#pragma once

#if defined(__arm__)
#  define __NR_getppid 64
#elif defined(__x86_64__)
#  define __NR_getppid 110
#else
#  error
#endif

#error
