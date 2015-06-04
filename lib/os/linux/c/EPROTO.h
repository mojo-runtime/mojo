#pragma once

#if defined(__alpha__)
#  define EPROTO 85
#elif defined(__hppa__)
#  define EPROTO 61
#elif defined(__sparc__)
#  define EPROTO 86
#else
#  define EPROTO 71
#endif
