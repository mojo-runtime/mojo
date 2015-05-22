#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EADDRINUSE 48
#elif defined(__hppa__)
#  define EADDRINUSE 226
#elif defined(__mips__)
#  define EADDRINUSE 125
#else
#  define EADDRINUSE 98
#endif
