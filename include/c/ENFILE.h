#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENFILE 23
#else
#  error
#endif
