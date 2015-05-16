#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SEEK_END 2
#else
#  error
#endif
