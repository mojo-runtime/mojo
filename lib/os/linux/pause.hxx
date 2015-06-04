#pragma once

#if defined(__arm__)
#  define __NR_pause 29
#elif defined(__x86_64__)
#  define __NR_pause 34
#else
#  error
#endif
