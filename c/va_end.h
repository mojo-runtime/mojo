#pragma once

#if defined(__GNUC__) // Assuming
#  define va_end __builtin_va_end
#else
#  error
#endif
