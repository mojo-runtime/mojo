#pragma once

#if defined(__alpha__)
#  define ECANCELED 131
#elif defined(__hppa__)
#  define ECANCELED 253 // ECANCELLED
#elif defined(__mips__)
#  define ECANCELED 158
#elif defined(__sparc__)
#  define ECANCELED 127
#else
#  define ECANCELED 125
#endif
