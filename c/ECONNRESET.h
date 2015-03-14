#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ECONNRESET 104
#  else
#    error
#  endif
#else
#  error
#endif
