#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ELOOP 62
#elif defined(__hppa__)
#  define EOLLOP 249
#elif defined(__mips__)
#  define ELOOP 90
#else
#  define ELOOP 40
#endif
