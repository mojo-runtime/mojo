#pragma once

#if defined(__arm__)
#  define __NR_getpid 20
#elif defined(__x86_64__)
#  define __NR_getpid 39
#else
#  error
#endif

#error
