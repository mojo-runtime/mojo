#ifndef _abi_Byte_hxx_
#define _abi_Byte_hxx_

#include "compat/has_attribute_mode.h"

namespace abi {

#if has_attribute_mode
typedef unsigned int Byte __attribute__((__mode__(__byte__)));
#else
#  error
#endif

} // namespace abi

#endif
