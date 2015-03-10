#ifndef NAME_MAX

#if defined(__linux__) || defined(__FreeBSD__)
#  define NAME_MAX 255
#else
#  error
#endif

#endif
