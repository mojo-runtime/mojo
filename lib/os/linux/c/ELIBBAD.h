#pragma once

#if defined(__alpha__)
#  define ELIBBAD 123
#elif defined(__hppa__)
#  define ELIBBAD 171
#elif defined(__mips__)
#  define ELIBBAD 84
#elif defined(__sparc__)
#  define ELIBBAD 112
#else
#  define ELIBBAD 80
#endif
