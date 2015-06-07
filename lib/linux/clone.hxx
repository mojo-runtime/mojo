#pragma once

#if defined(__arm__)
#  define __NR_clone 120
#elif defined(__x86_64__)
#  define __NR_clone 56
#else
#  error
#endif

#error
