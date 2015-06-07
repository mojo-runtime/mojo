#pragma once

#if defined(__arm__)
#  define __NR_exit_group 248
#elif defined(__x86_64__)
#  define __NR_exit_group 231
#else
#  error
#endif

#error
