#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ETIME 62
#  else
#    error
#  endif
#else
#  error
#endif
