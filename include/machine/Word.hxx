#ifndef _machine_Word_hxx_
#define _machine_Word_hxx_

#include "compat/has_attribute_mode.h"

namespace machine {

#if has_attribute_mode
typedef unsigned int Word __attribute__((__mode__(__word__)));
#else
#  error
#endif

} // namespace machine

#endif
