#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define EIO 5
#else
#  error
#endif
