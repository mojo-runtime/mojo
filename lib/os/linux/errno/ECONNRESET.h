#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ECONNRESET 54
#elif defined(__hppa__)
#  define ECONNRESET 232
#elif defined(__mips__)
#  define ECONNRESET 131
#else
#  define ECONNRESET 104
#endif
