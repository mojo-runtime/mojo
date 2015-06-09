#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EHOSTUNREACH 65
#elif defined(__hppa__)
#  define EHOSTUNREACH 242
#elif defined(__mips__)
#  define EHOSTUNREACH 148
#else
#  define EHOSTUNREACH 113
#endif
