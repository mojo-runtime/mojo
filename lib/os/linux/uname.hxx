#pragma once

#if defined(__arm__)
#  define __NR_uname 122
#elif defined(__x86_64__)
#  define __NR_uname 63
#else
#  error
#endif

#error
