#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLNVAL 0x20
#else
#  error
#endif
