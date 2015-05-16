#pragma once

#if defined(__UINT64_C)
#  define UINT64_C(x) __UINT64_C(x)
#elif defined(__UINT64_C_SUFFIX__)
#  define UINT64_C(x) x ## __UINT64_C_SUFFIX__
#else
#  error
#endif
