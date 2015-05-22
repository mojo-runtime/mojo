#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EPROTONOSUPPORT 43
#elif defined(__hppa__)
#  define EPROTONOSUPPORT 221
#elif defined(__mips__)
#  define EPROTONOSUPPORT 120
#else
#  define EPROTONOSUPPORT 93
#endif
