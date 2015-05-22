#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENOBUFS 55
#elif defined(__hppa__)
#  define ENOBUFS 233
#elif defined(__mips__)
#  define ENOBUFS 132
#else
#  define ENOBUFS 105
#endif
