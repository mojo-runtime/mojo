#pragma once

#if defined(__alpha__)
#  define EIDRM 81
#elif defined(__hppa__) || defined(__mips__)
#  define EIDRM 36
#elif defined(__sparc__)
#  define EIDRM 77
#else
#  define EIDRM 43
#endif
