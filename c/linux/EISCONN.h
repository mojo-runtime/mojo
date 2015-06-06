#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EISCONN 56
#elif defined(__hppa__)
#  define EISCONN 234
#elif defined(__mips__)
#  define EISCONN 133
#else
#  define EISCONN 106
#endif
