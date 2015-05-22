#pragma once

#if defined(__arm__)
#  define SYS_set_thread_area _Pragma("GCC error \"todo - removed?\"")
#elif defined(__x86_64__)
#  define SYS_set_thread_area 205
#else
#  error
#endif
