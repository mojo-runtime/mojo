#pragma once

#include "linux/__Number.hxx"

namespace linux::epoll_create1 {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 291
#else
#  error
#endif
 ;

}
