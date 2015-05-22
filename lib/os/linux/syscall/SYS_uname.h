#pragma once

#if defined(__arm__)
#  define SYS_uname 122
#elif defined(__x86_64__)
#  define SYS_uname 63
#else
#  error
#endif
