#pragma once

#if defined(__linux__)
#  define WCONTINUED 0x8
#elif defined(__FreeBSD__)
#  define WCONTINUED 0x4
#else
#  error
#endif
