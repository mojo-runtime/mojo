#ifndef EMFILE

#if defined(__linux__) || defined(__FreeBSD__)
#  define EMFILE 24
#else
#  error
#endif

#endif