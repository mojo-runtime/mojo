#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ECONNABORTED 53
#elif defined(__hppa__)
#  define ECONNABORTED 231
#elif defined(__mips__)
#  define ECONNABORTED 130
#else
#  define ECONNABORTED 103
#endif
