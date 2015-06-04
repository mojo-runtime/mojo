#pragma once

#if defined(__arm__)
#  define __NR_getuid 24
#elif defined(__x86_64__)
#  define __NR_getuid 102
#else
#  error
#endif

#error
