#pragma once

#if defined(__arm__)
#  define __NR_geteuid 49
#elif defined(__x86_64__)
#  define __NR_geteuid 107
#else
#  error
#endif

#error
