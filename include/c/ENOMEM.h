#ifndef ENOMEM

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOMEM 12
#else
#  error
#endif

#endif
