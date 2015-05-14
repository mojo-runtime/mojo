#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
typedef unsigned int speed_t;
#else
#  error
#endif
