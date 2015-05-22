#pragma once

#if defined(__arm__)
#  define SYS_exit_group 248
#elif defined(__x86_64__)
#  define SYS_exit_group 231
#else
#  error
#endif
