#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENETUNREACH 51
#elif defined(__hppa__)
#  define ENETUNREACH 229
#elif defined(__mips__)
#  define ENETUNREACH 128
#else
#  define ENETUNREACH 101
#endif
