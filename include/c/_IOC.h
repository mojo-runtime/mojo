#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__FreeBSD__)
#  include "IOCPARM_MASK.h"
#  include "compat/__static_cast.h"
#  define _IOC(inout,group,num,len) \
    __static_cast(unsigned long, ((inout) | (((len) & IOCPARM_MASK) << 16) | ((group) << 8) | (num)))
#else
#  error
#endif

#pragma clang diagnostic pop
