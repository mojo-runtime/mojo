#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EADDRNOTAVAIL 49
#elif defined(__hppa__)
#  define EADDRNOTAVAIL 227
#elif defined(__mips__)
#  define EADDRNOTAVAIL 126
#else
#  define EADDRNOTAVAIL 99
#endif
