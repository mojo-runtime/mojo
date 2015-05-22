#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EAFNOSUPPORT 47
#elif defined(__hppa__)
#  define EAFNOSUPPORT 225
#elif defined(__mips__)
#  define EAFNOSUPPORT 124
#else
#  define EAFNOSUPPORT 97
#endif
