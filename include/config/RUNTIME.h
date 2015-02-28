#ifndef RUNTIME

#define RUNTIME_GLIBC 30
#define RUNTIME_FREEBSD 31

#if defined(__gnu_linux__)
#  define RUNTIME RUNTIME_GLIBC
#elif defined(__FreeBSD__)
#  define RUNTIME RUNTIME_FREEBSD
#else
#  error
#endif

#endif
