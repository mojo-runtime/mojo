#pragma once

#if defined(__arm__)
#  define __NR_waitid 280
#elif defined(__x86_64__)
#  define __NR_waitid 247
#else
#  error
#endif

#error
