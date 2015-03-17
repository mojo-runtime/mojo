#pragma once

#if defined(__GNUC__) // Assuming
#  define va_copy(dest, src) __builtin_va_copy(dest, src)
#else
#  error
#endif
