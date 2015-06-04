#pragma once

#if defined(__alpha__)
#  define EILSEQ 116
#elif defined(__hppa__)
#  define EILSEQ 47
#elif defined(__mips__)
#  define EILSEQ 88
#elif defined(__sparc__)
#  define EILSEQ 122
#else
#  define EILSEQ 84
#endif
