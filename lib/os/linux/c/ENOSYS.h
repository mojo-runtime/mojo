#pragma once

#if defined(__alpha__)
#  define ENOSYS 78
#elif defined(__hppa__)
#  define ENOSYS 251
#elif defined(__mips__)
#  define ENOSYS 89
#elif defined(__sparc__)
#  define ENOSYS 90
#else
#  define ENOSYS 38
#endif
