#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EMSGSIZE 40
#elif defined(__hppa__)
#  define EMSGSIZE 218
#elif defined(__mips__)
#  define EMSGSIZE 97
#else
#  define EMSGSIZE 90
#endif
