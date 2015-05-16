#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ISTRIP 0x20
#else
#  error
#endif
