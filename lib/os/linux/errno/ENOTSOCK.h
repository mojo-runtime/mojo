#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ENOTSOCK 38
#elif defined(__hppa__)
#  define ENOTSOCK 216
#elif defined(__mips__)
#  define ENOTSOCK 95
#else
#  define ENOTSOCK 88
#endif
