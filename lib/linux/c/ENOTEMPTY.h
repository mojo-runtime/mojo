#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENOTEMPTY 66
#elif defined(__hppa__)
#  define ENOTEMPTY 247
#elif defined(__mips__)
#  define ENOTEMPTY 93
#elif defined(__sparc__)
#  define ENOTEMPTY 66
#else
#  define ENOTEMPTY 39
#endif
