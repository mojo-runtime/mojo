#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define EBUSY 16
#else
#  error
#endif
