#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOEXEC 8
#else
#  error
#endif
