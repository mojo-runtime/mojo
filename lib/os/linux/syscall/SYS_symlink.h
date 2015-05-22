#pragma once

#if defined(__arm__)
#  define SYS_symlink 83
#elif defined(__x86_64__)
#  define SYS_symlink 88
#else
#  error
#endif
