#pragma once

#if defined(__LP64__) || defined(__ILP32__)
typedef unsigned char __Byte;
#else
#  error
#endif
