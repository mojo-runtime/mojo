#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENXIO 6
#else
#  error
#endif
