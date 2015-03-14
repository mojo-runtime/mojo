#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ECONNREFUSED 111
#  else
#    error
#  endif
#else
#  error
#endif
