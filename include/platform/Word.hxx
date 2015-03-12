#ifndef _platform_Word_hxx_
#define _platform_Word_hxx_

#include "compat/has_attribute_mode.h"

namespace platform {

#if has_attribute_mode
typedef unsigned int Word __attribute__((__mode__(__word__)));
#else
#  error
#endif

} // namespace platform

#endif
