#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SEEK_CUR 1
#else
#  error
#endif
