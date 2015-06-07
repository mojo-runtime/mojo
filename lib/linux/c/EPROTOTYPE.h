#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EPROTOTYPE 41
#elif defined(__hppa__)
#  define EPROTOTYPE 219
#elif defined(__mips__)
#  define EPROTOTYPE 98
#else
#  define EPROTOTYPE 91
#endif
