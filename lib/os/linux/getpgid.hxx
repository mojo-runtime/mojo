#pragma once

#if defined(__arm__)
#  define __NR_getpgid 132
#elif defined(__x86_64__)
#  define __NR_getpgid 121
#else
#  error
#endif

#error
