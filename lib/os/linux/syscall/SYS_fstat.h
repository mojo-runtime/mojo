#pragma once

#if defined(__arm__)
#  define SYS_fstat 108
#elif defined(__x86_64__)
#  define SYS_fstat 5
#else
#  error
#endif
