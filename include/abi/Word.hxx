#ifndef _abi_Word_hxx_
#define _abi_Word_hxx_

#include "compat/has_attribute_mode.h"

namespace abi {

#if has_attribute_mode
typedef unsigned int Word __attribute__((__mode__(__word__)));
#else
#  error
#endif

} // namespace abi

#endif
