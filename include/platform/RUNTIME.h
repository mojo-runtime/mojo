#ifndef RUNTIME

#define RUNTIME_GNU 30

#if defined(__gnu_linux__)
#  define RUNTIME RUNTIME_GNU
#else
#  error
#endif

#endif
