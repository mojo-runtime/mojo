#pragma once

#if defined(__alpha__) || defined(__sparc__)
#  define EINPROGRESS 36
#elif defined(__hppa__)
#  define EINPROGRESS 245
#elif defined(__mips__)
#  define EINPROGRESS 150
#else
#  define EINPROGRESS 115
#endif
