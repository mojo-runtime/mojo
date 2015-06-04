#pragma once

#if defined(__alpha__)
#  define ENOLCK 77
#elif defined(__hppa__) || defined(__mips__)
#  define ENOLCK 46
#elif defined(__sparc__)
#  define ENOLCK 79
#else
#  define ENOLCK 37
#endif
