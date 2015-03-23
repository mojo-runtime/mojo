#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define AT_UID 11
#else
#  error
#endif
