#pragma once

#if defined(__LP64__) || defined(__ILP32__)
typedef unsigned long __Word;
#else
#  error
#endif
