#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define INPCK 0x10
#else
#  error
#endif
