#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define OPOST 0x1
#else
#  error
#endif
