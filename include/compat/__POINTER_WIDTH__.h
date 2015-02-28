#ifndef __POINTER_WIDTH__

#if defined(__LP64__) || defined(__ILP64__) || defined(__LLP64__)
#  define __POINTER_WIDTH__ 64
#elif defined(__ILP32__) || defined(__LP32__)
#  define __POINTER_WIDTH__ 32
#else
#  error
#endif

#endif
