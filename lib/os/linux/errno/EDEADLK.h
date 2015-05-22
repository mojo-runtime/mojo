#pragma once

#if defined(__alpha__)
#  define EDEADLK 11
#elif defined(__hppa__) || defined(__mips__)
#  define EDEADLK 45
#elif defined(__sparc__)
#  define EDEADLK 78
#else
#  define EDEADLK 35
#endif
