#pragma once

#if defined(__arm__)
#  define __NR_mremap 163
#elif defined(__x86_64__)
#  define __NR_mremap 25
#else
#  error
#endif

#error
