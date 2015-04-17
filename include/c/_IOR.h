#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__FreeBSD__)
#  include "IOC_OUT.h"
#  include "_IOC.h"
#  define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#else
#  error
#endif

#pragma clang diagnostic pop
