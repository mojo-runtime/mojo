#ifndef EEXIST

#if defined(__linux__) || defined(__FreeBSD__)
#  define EEXIST 17
#else
#  error
#endif

#endif
