#pragma once

#if defined(__alpha__)
#  define ENOSR 82
#elif defined(__hppa__)
#  define ENOSR 53
#elif defined(__sparc__)
#  define ENOSR 74
#else
#  define ENOSR 63
#endif
