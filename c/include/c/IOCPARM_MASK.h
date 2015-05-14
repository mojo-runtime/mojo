#pragma once

#if defined(__FreeBSD__)
#  include "IOCPARM_SHIFT.h"
#  define IOCPARM_MASK (1 << IOCPARM_SHIFT)
#else
#  error
#endif
