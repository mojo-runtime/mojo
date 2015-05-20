#pragma once

#if defined(__FreeBSD__)
#  include <feature/__old_style_cast.h>
#  include "IOCPARM_MASK.h"
#  define _IOC(inout,group,num,len) \
    __old_style_cast(unsigned long, ((inout) | (((len) & IOCPARM_MASK) << 16) | ((group) << 8) | (num)))
#else
#  error
#endif
