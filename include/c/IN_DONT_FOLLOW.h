#pragma once

#if defined(__linux__)
#  define IN_DONT_FOLLOW 0x2000000
#else
#  error
#endif
