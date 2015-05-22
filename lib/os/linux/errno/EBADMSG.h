#pragma once

#if defined(__alpha__)
#  define EBADMSG 84
#elif defined(__hppa__)
#  define EBADMSG 67
#elif defined(__mips__)
#  define EBADMSG 77
#elif defined(__sparc__)
#  define EBADMSG 76
#else
#  define EBADMSG 74
#endif
