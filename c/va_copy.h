#pragma once

#if defined(__GNUC__) // Assuming
#  define va_copy __builtin_va_copy
#else
#  error
#endif
