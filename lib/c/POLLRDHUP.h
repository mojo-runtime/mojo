#pragma once

#if defined(__linux__)
#  define POLLRDHUP 0x2000
#else
#  error
#endif
