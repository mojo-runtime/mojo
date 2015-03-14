#ifndef INT32_C

#if defined(__INT32_C)
#  define INT32_C(x) __INT32_C(x)
#elif defined(__INT32_C_SUFFIX__)
#  define INT32_C(x) x ## __INT32_C_SUFFIX__
#else
#  error
#endif

#endif
