#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EOPNOTSUPP 45
#elif defined(__hppa__)
#  define EOPNOTSUPP 223
#elif defined(__mips__)
#  define EOPNOTSUPP 122
#else
#  define EOPNOTSUPP 95
#endif
