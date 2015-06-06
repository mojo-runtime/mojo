#pragma once

#if defined(__arm__)
#  define __NR_dup2 63
#elif defined(__x86_64__)
#  define __NR_dup2 33
#else
#  error
#endif

#error
