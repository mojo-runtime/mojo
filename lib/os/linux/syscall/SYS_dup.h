#pragma once

#if defined(__arm__)
#  define SYS_dup 41
#elif defined(__x86_64__)
#  define SYS_dup 32
#else
#  error
#endif
