#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_FDCWD -100
#else
#  error
#endif
