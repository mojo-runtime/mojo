#pragma once

#if defined(__arm__)
#  define SYS_geteuid 49
#elif defined(__x86_64__)
#  define SYS_geteuid 107
#else
#  error
#endif
