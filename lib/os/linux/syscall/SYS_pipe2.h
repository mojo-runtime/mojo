#pragma once

#if defined(__arm__)
#  define SYS_pipe2 359
#elif defined(__x86_64__)
#  define SYS_pipe2 293
#else
#  error
#endif
