#pragma once

#if defined(__alpha__)
#  define ENOMSG 80
#elif defined(__hppa__) || defined(__mips__)
#  define ENOMSG 35
#elif defined(__sparc__)
#  define ENOMSG 75
#else
#  define ENOMSG 42
#endif
