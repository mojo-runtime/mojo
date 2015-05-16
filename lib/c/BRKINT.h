#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define BRKINT 0x2
#else
#  error
#endif
