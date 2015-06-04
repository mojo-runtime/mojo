#pragma once

#if defined(__arm__) || defined(__x86_64__) // generic
#  define MAP_ANONYMOUS 0x20
#else
#  error
#endif
