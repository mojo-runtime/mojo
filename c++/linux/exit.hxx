#pragma once

#if defined(__arm__)
#  define __NR_exit 1
#elif defined(__x86_64__)
#  define __NR_exit 60
#else
#  error
#endif

#error
