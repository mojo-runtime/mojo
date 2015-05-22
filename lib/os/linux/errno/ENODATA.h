#pragma once

#if defined(__alpha__)
#  define ENODATA 86
#elif defined(__hppa__)
#  define ENODATA 51
#elif defined(__sparc__)
#  define ENODATA 111
#else
#  define ENODATA 61
#endif
