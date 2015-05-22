#pragma once

#if defined(__alpha__)
#  define EOVERFLOW 112
#elif defined(__hppa__)
#  define EOVERFLOW 72
#elif defined(__mips__)
#  define EOVERFLOW 79
#elif defined(__sparc__)
#  define EOVERFLOW 92
#else
#  define EOVERFLOW 75
#endif
