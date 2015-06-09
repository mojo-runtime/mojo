#pragma once

#if defined(__alpha__)
#  define ETIME 83
#elif defined(__hppa__)
#  define ETIME 52
#elif defined(__sparc__)
#  define ETIME 73
#else
#  define ETIME 62
#endif
