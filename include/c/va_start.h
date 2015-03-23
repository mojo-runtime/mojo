#pragma once

#if defined(__GNUC__) // Assuming
#  define va_start(ap, parm_n) __builtin_va_start(ap, parm_n)
#else
#  error
#endif
