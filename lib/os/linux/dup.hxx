#pragma once

#if defined(__arm__)
#  define __NR_dup 41
#elif defined(__x86_64__)
#  define __NR_dup 32
#else
#  error
#endif

#error
