#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLIN 0x1
#else
#  error
#endif
