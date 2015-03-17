#pragma once

#include "linux/__Number.hxx"

namespace linux::epoll_ctl {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 233
#else
#  error
#endif
 ;

}
