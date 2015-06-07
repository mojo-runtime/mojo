#pragma once

#if defined(__alpha__)
#  define ENOSTR 87
#elif defined(__hppa__)
#  define ENOSTR 54
#elif defined(__mips__)
#  define ENOSTR 60
#elif defined(__sparc__)
#  define ENOSTR 72
#else
#  define ENOSTR 60
#endif
