#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EDESTADDRREQ 39
#elif defined(__hppa__)
#  define EDESTADDRREQ 217
#elif defined(__mips__)
#  define EDESTADDRREQ 96
#else
#  define EDESTADDRREQ 89
#endif
