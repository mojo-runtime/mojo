#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define EPIPE 32
#else
#  error
#endif
