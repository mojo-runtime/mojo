#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOSPC 28
#else
#  error
#endif
