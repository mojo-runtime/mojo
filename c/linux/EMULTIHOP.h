#pragma once

#if defined(__alpha__)
#  define EMULTIHOP 110
#elif defined(__hppa__)
#  define EMULTIHOP 64
#elif defined(__mips__)
#  define EMULTIHOP 74
#elif defined(__sparc__)
#  define EMULTIHOP 87
#else
#  define EMULTIHOP 72
#endif
