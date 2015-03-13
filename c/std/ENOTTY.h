#ifndef ENOTTY

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOTTY 25
#else
#  error
#endif

#endif
