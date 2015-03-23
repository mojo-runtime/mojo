#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_ENTRY 9
#else
#  error
#endif
