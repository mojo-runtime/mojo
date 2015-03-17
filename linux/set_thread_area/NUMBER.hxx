#pragma once

#include "linux/__Number.hxx"

namespace linux::set_thread_area {

static
const __Number
NUMBER =
#if defined(__x86_64__)
 205
#else
#  error
#endif
 ;

}
