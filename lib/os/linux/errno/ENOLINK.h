#pragma once

#if defined(__alpha__)
#  define ENOLINK 106
#elif defined(__hppa__)
#  define ENOLINK 57
#elif defined(__sparc__)
#  define ENOLINK 82
#else
#  define ENOLINK 67
#endif
