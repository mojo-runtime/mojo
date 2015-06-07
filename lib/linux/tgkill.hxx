#pragma once

#if defined(__arm__)
#  define __NR_tgkill 268
#elif defined(__x86_64__)
#  define __NR_tgkill 234
#else
#  error
#endif

#error
