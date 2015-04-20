#pragma once

#if defined(__linux__)
#  define IN_ONLYDIR 0x1000000
#else
#  error
#endif
