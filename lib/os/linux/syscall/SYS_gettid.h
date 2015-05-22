#pragma once

#if defined(__arm__)
#  define SYS_gettid 224
#elif defined(__x86_64__)
#  define SYS_gettid 186
#else
#  error
#endif
