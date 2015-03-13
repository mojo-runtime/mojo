#ifndef WNOWAIT

#if defined(__linux__)
#  define WNOWAIT 0x1000000
#elif defined(__FreeBSD__)
#  define WNOWAIT 0x8
#else
#  error
#endif

#endif
