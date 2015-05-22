#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENETDOWN 50
#elif defined(__hppa__)
#  define ENETDOWN 228
#elif defined(__mips__)
#  define ENETDOWN 127
#else
#  define ENETDOWN 100
#endif
