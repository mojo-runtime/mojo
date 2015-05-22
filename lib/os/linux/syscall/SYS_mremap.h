#pragma once

#if defined(__arm__)
#  define SYS_mremap 163
#elif defined(__x86_64__)
#  define SYS_mremap 25
#else
#  error
#endif
