#pragma once

#if defined(__linux__)
#  define EPOLLONESHOT (1 << 30)
#else
#  error
#endif
