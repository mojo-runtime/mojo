#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ETIMEDOUT 60
#elif defined(__hppa__)
#  define ETIMEDOUT 238
#elif defined(__mips__)
#  define ETIMEDOUT 145
#else
#  define ETIMEDOUT 110
#endif
