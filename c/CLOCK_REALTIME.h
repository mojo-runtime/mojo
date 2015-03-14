#ifndef CLOCK_REALTIME

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLOCK_REALTIME 0
#else
#  error
#endif

#endif
