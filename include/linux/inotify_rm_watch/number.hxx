#pragma once

#include "linux/__Number.hxx"

namespace linux::inotify_rm_watch {

static
const __Number
number =
#if defined(__x86_64__)
 255
#else
#  error
#endif
 ;

}
