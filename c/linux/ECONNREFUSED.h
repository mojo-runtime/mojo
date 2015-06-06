#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define ECONNREFUSED 61
#elif defined(__hppa__)
#  define ECONNREFUSED 239
#elif defined(__mips__)
#  define ECONNREFUSED 146
#else
#  define ECONNREFUSED 111
#endif
