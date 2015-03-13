#ifndef UINT32_C

#if defined(__UINT32_C)
#  define UINT32_C(x) __UINT32_C(x)
#elif defined(__UINT32_C_SUFFIX__)
#  define UINT32_C(x) x ## __UINT32_C_SUFFIX__
#else
#  error
#endif

#endif
