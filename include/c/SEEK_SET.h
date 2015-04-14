#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SEEK_SET 0
#else
#  error
#endif
