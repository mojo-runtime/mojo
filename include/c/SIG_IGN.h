#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIG_IGN ((void (*)(int))1)
#else
#  error
#endif
