#pragma once

#if defined(__alpha__) || defined(__hppa__) || defined(__sparc__)
#  define EDQUOT 69
#elif defined(__mips__)
#  define EDQUOT 1133
#else
#  define EDQUOT 122
#endif
