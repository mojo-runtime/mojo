#pragma once

#if defined(__FreeBSD__)
#  include "IOCPARM_MASK.h"
#  define _IOC(inout,group,num,len) \
    ((unsigned long)((inout) | (((len) & IOCPARM_MASK) << 16) | ((group) << 8) | (num)))
#else
#  error
#endif
