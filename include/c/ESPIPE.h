#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ESPIPE 29
#else
#  error
#endif
