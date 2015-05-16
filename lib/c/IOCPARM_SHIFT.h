#pragma once

#if defined(__FreeBSD__)
#  define IOCPARM_SHIFT 13
#else
#  error
#endif
