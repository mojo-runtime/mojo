#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define POLLWRBAND 0x200
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define POLLWRBAND 0x100
#else
#  error
#endif
