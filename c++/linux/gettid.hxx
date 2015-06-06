#pragma once

#if defined(__arm__)
#  define __NR_gettid 224
#elif defined(__x86_64__)
#  define __NR_gettid 186
#else
#  error
#endif

#error
