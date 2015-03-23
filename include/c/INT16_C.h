#pragma once

#if defined(__INT16_C)
#  define INT16_C(x) __INT16_C(x)
#elif defined(__INT16_C_SUFFIX__)
#  define INT16_C(x) x ## __INT16_C_SUFFIX__
#else
#  error
#endif
