#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define DT_REG 8
#else
#  error
#endif
