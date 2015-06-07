#pragma once

#if defined(__arm__)
#  define __NR_vfork 190
#elif defined(__x86_64__)
#  define __NR_vfork 58
#else
#  error
#endif

#error
