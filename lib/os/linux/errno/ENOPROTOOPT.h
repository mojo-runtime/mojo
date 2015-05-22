#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENOPROTOOPT 42
#elif defined(__hppa__)
#  define ENOPROTOOPT 220
#elif defined(__mips__)
#  define ENOPROTOOPT 99
#elif defined(__sparc__)
#  define ENOPROTOOPT 92
#endif
