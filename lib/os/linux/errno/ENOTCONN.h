#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENOTCONN 57
#elif defined(__hppa__)
#  define ENOTCONN 235
#elif defined(__mips__)
#  define ENOTCONN 134
#else
#  define ENOTCONN 107
#endif
