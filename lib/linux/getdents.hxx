#pragma once

#if defined(__arm__)
#  define __NR_getdents 141 // __NR_getdents
#elif defined(__x86_64__)
#  define __NR_getdents 78 // __NR_getdents
#else
#  error
#endif

#error
