#ifndef WUNTRACED

#if defined(__linux__) || defined(__FreeBSD__)
#  define WUNTRACED 0x2
#else
#  error
#endif

#endif
