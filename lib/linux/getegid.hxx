#pragma once

#if defined(__arm__)
#  define __NR_getegid 50
#elif defined(__x86_64__)
#  define __NR_getegid 108
#else
#  error
#endif

#error
