#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EALREADY 37
#elif defined(__hppa__)
#  define EALREADY 244
#elif defined(__mips__)
#  define EALREADY 149
#else
#  define EALREADY 114
#endif
