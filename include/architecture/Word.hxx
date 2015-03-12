#ifndef _architecture_Word_hxx_
#define _architecture_Word_hxx_

#include "compat/has_attribute_mode.h"

namespace architecture {

#if has_attribute_mode
typedef unsigned int Word __attribute__((__mode__(__word__)));
#else
#  error
#endif

} // namespace architecture

#endif
