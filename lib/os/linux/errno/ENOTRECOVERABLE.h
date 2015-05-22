#pragma once

#if defined(__alpha__)
#  define ENOTRECOVERABLE 137
#elif defined(__hppa__)
#  define ENOTRECOVERABLE 255
#elif defined(__mips__)
#  define ENOTRECOVERABLE 166
#elif defined(__sparc__)
#  define ENOTRECOVERABLE 133
#else
#  define ENOTRECOVERABLE 131
#endif
