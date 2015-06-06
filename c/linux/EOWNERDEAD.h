#pragma once

#if defined(__alpha__)
#  define EOWNERDEAD 136
#elif defined(__hppa__)
#  define EOWNERDEAD 254
#elif defined(__mips__)
#  define EOWNERDEAD 165
#elif defined(__sparc__)
#  define EOWNERDEAD 132
#else
#  define EOWNERDEAD 130
#endif
