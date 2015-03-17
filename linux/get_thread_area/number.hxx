#pragma once

#include "linux/__Number.hxx"

namespace linux::get_thread_area {

static
const __Number
number =
#if defined(__x86_64__)
 211
#else
#  error
#endif
 ;

}
