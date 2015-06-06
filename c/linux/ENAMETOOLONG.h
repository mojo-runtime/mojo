#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENAMETOOLONG 63
#elif defined(__hppa__)
#  define ENAMETOOLONG 248
#elif defined(__mips__)
#  define ENAMETOOLONG 78
#else
#  define ENAMETOOLONG 36
#endif
