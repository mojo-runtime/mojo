#pragma once

#if defined(__arm__)
#  define SYS_get_thread_area _Pragma("GCC error \"todo - removed?\"")
#elif defined(__x86_64__)
#  define SYS_get_thread_area 211
#else
#  error
#endif
