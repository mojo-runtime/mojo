#ifndef INTMAX_C

#if defined(__INTMAX_C)
#  define INTMAX_C(x) __INTMAX_C(x)
#elif defined(__INTMAX_C_SUFFIX__)
#  define INTMAX_C(x) x ## __INTMAX_C_SUFFIX__
#else
#  error
#endif

#endif
