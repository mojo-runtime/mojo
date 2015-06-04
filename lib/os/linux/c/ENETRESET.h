#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENETRESET 52
#elif defined(__hppa__)
#  define ENETRESET 230
#elif defined(__mips__)
#  define ENETRESET 129
#else
#  define ENETRESET 102
#endif
