#pragma once

#if defined(__linux__)
#  define IN_ISDIR 0x40000000
#else
#  error
#endif
