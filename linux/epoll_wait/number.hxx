#pragma once

#include "linux/__Number.hxx"

namespace linux::epoll_wait {

static
const __Number
number =
#if defined(__x86_64__)
 232
#else
#  error
#endif
 ;

}
