#pragma once

#if defined(__arm__)
#  define SYS_getdents 141 // __NR_getdents
#elif defined(__x86_64__)
#  define SYS_getdents 78 // __NR_getdents
#else
#  error
#endif
