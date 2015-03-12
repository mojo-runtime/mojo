#ifndef _platform_Byte_hxx_
#define _platform_Byte_hxx_

#include "compat/has_attribute_mode.h"

namespace platform {

#if has_attribute_mode
typedef unsigned int Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif

} // namespace platform

#endif
