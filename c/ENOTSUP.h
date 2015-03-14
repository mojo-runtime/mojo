#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOTSUP 524 // ENOTSUPP
#  else
#    error
#  endif
#else
#  error
#endif
