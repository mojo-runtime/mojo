#ifndef RUNTIME

#define RUNTIME_GLIBC 30

#if defined(__gnu_linux__)
#  define RUNTIME RUNTIME_GLIBC
#else
#  error
#endif

#endif
