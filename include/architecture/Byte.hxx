#ifndef _architecture_Byte_hxx_
#define _architecture_Byte_hxx_

#include "compat/has_attribute_mode.h"

namespace architecture {

#if has_attribute_mode
typedef unsigned int Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif

} // namespace architecture

#endif
