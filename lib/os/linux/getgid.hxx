#pragma once

#if defined(__arm__)
#  define __NR_getgid 47
#elif defined(__x86_64__)
#  define __NR_getgid 104
#else
#  error
#endif

#error
