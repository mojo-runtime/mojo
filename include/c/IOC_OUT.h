#pragma once

#if defined(__FreeBSD__)
#  define IOC_OUT 0x40000000
#else
#  error
#endif
