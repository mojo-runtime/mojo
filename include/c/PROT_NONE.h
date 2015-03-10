#ifndef PROT_NONE

#if defined(__linux__) || defined(__FreeBSD__)
#  define PROT_NONE 0
#else
#  error
#endif

#endif
